import requests
def getHTMLText(url):
    try:
        r=requests.get(url,timeout=30)
        r.raise_for_status()
        r.encoding=r.apparent_encoding
        return r.text
    except:
        return'产生异常'#没有指定错误异常？？ r.raise_for_status()
if __name__=="__main__":
    url="http://www.baidu.com"
    print(getHTMLText(url))
