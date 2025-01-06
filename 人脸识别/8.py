from PIL import Image, ImageDraw, ImageFont
import numpy as np
import cv2,dlib
detector = dlib.get_frontal_face_detector()
img = cv2.imread("example.png")
#在人脸上画一个框
faces = detector(img, 1)
for i,d in enumerate(faces,start=1):
    print(d.left())
    print("第", i, "个人脸的矩形框坐标：",
          "left:", d.left(), "right:", d.right(), "top:", d.top(), "bottom:", d.bottom())
    cv2.rectangle(img, tuple([d.left(), d.top()]), tuple([d.right(), d.bottom()]), (0, 255, 255), 2)
cv2.namedWindow("img", 2)
# 在框底部画一个文本框，并标注姓名
cv2.rectangle(img, tuple([d.left(), d.top()]), tuple([d.right(), d.bottom()]), (0, 255, 255), 2)
#cv2.rectangle(img, (left, bottom - 35), (right, bottom), (0, 0, 255), cv2.FILLED)
#注释掉原来的字体设置
#font = cv2.FONT_HERSHEY_DUPLEX 
#注释掉原来的字体输出
#cv2.putText(frame, name, (left + 6, bottom - 6), font, 1.0, (255, 255, 255), 1)
frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)  # cv2和PIL中颜色的hex码的储存顺序不同
pilimg = Image.fromarray(frame)
draw = ImageDraw.Draw(pilimg)  # 图片上打印
font = ImageFont.truetype("123.txt", 20, encoding="utf-8")  # 参数1：字体文件路径，参数2：字体大小
draw.text( (left + 6, bottom - 30), name, (255, 255, 255), font=font)  # 参数1：打印坐标，参数2：文本，参数3：字体颜色，参数4：字体
frame = cv2.cvtColor(np.array(pilimg), cv2.COLOR_RGB2BGR)  # 输出文字后，图片转换会cv2识别格式
cv2.imshow('Video', frame)

