# encoding:utf-8
import requests as rq
from pyquery import PyQuery as pq
import time
import csv
import pymysql


def urls():
    urls_ = ["http://gschool.ecust.edu.cn/7962",
             "http://gschool.ecust.edu.cn/tzgg1"]  # 硕士招生、通知公告
    return urls_


def FICE(url):
    # fuck the ConnectionError 
    try:
        response = rq.get(url)
        response.encoding = response.apparent_encoding
        content = response.text
    except rq.exceptions.ConnectionError as e:
        print('ConnectionError:', e)
        return FICE(url)
    else:
        return content


def getdata():
    result = []
    for url in urls():
        # 只爬取一页
        url = url + '/list1.htm'
        pages = FICE(url)
        doc1 = pq(pages)('.Article_Title')
        doc2 = pq(pages)('.Article_PublishDate')
        tender = pq(pages)('.col_title').text()
        for i in range(0, len(doc1) - 1):
            title = pq(doc1[i])('a').attr.title
            time = pq(doc2[i]).text()
            source = u'研究生院'
            label1 = u'研究生院'
            label2 = tender
            url_ = 'http://gschool.ecust.edu.cn' + pq(doc1[i])('a').attr.href
            if url_ in urlList: continue
            news = FICE(url_)
            news_content = pymysql.escape_string(pq(news)('.wp_articlecontent').html())
            read_count = int(pq(news)('.WP_VisitCount').text())
            promulgator = pq(news)('.arti_publisher').text()[4:len(pq(news)('.arti_publisher').text())]
            result.append(
                [time, title, url_, news_content, source, read_count, promulgator, label1, label2])
    return result


def putintomysql():
    db = pymysql.connect("localhost", "root", "piclass", "piclass2", charset="utf8")
    for i in getdata():
        text = "INSERT INTO news(release_time,title, URL, content, source, read_count,promulgator,label1,label2) VALUES ('%s', '%s', '%s', '%s', '%s', '%d', '%s', '%s', '%s')" % (
        i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7], i[8])
        cursor = db.cursor()
        cursor.execute(text)
        cursor.close()
        db.commit()
    db.close()


urlList = set()
db = pymysql.connect("localhost", "root", "piclass", "piclass2", charset="utf8")
cur = db.cursor()
cur.execute("select url from news where source='研究生院'")
tmp = cur.fetchall()
for t in tmp:
    urlList.add(t[0])
cur.close()
db.close()

putintomysql()
