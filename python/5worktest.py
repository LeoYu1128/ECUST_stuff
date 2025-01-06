import requests
url="http://202.120.165.61/contest/计算机应用能力大赛题目--高嘉科技提供.pdf"
response=requests.get(url)
data=response.content
fobj=open("file.pdf",'wb')
fobj.write(data)
fobj.close()
