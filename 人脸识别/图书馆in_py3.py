# -*- coding: utf-8 -*-
import requests
from pyquery import PyQuery as pq
import re
import sys
import pymysql
import time as Time


def FTCE(url):
    # fuck the ConnectionError
    try:
        response = requests.get(url)
        response.encoding = response.apparent_encoding
        content = response.text
    except requests.exceptions.ConnectionError as e:
        return FTCE(url)
    else:
        return content


def getdata():
    result = []
    url = "http://lib.ecust.edu.cn/zh-hans/newslist"
    pages = pq((requests.get(url)).text)
    for each in pages(".item-list li").items():
        end = each("li")

        source = u"华东理工大学图书馆"
        label1 = u"华东理工大学图书馆"
        label2 = each("span")(".views-field-news-tags").text()
        url_ = each("a").attr('href')
        if not url_:
            break
        match = re.search(r'edu', url_)
        if not match:
            url_ = "http://lib.ecust.edu.cn/" + url_
        if url_ in urlList:continue
        title = each("a").text()
        time = each("div")(".views-field-created").text()
        content = FTCE(url_)
        titles = pq(content)('.titles').text()

        matchObj = re.search(r'\d+', titles)
        if matchObj:
            read_count = int(matchObj.group())
        else:
            read_count = -1

        promulgator = ''

        matchObj = re.search(u'稿件来源: \S+', titles)

        if matchObj:
            promulgator = matchObj.group()[6:len(matchObj.group())]
        if pq(content)('.content').html()!=None:
            news_content = pymysql.escape_string(pq(content)('.content').html())
        else:
            news_content = ''
        result.append(
            [time, title, url_, news_content, source, read_count, promulgator, label1,
             label2])

    return result


def putintomysql():
    db = pymysql.connect(host="localhost", user="root", password="piclass", database="piclass2", charset="utf8")
    for i in getdata():
        text = "INSERT INTO news(release_time,title, URL, content, source, read_count,promulgator,label1,label2) VALUES ('%s', '%s', '%s', '%s', '%s', '%d', '%s', '%s', '%s')" % (
        i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7], i[8])
        cursor = db.cursor()
        cursor.execute(text)
        cursor.close()
        db.commit()
    db.close()



urlList = set()
db = pymysql.connect(host="localhost", user="root", password="piclass", database="piclass2", charset="utf8")
cur = db.cursor()
cur.execute("select url from news where source='华东理工大学图书馆'")
tmp = cur.fetchall()
for t in tmp:
    urlList.add(t[0])
cur.close()
db.close()

putintomysql()