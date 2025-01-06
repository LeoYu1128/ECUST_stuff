import requests
url="http://img.blog.csdn.net/20150719230252020"
response=requests.get(url)
data=response.content
fobj=open("file.jpg",'wb')
fobj.write(data)
fobj.close()
