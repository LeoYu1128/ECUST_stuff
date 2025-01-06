import cv2
cap = cv2.VideoCapture(0)
a,frame = cap.read()#此刻拍照
cv2.imshow("xrt", frame)
cv2.imwrite("xrt.png", frame)# 将拍摄内容保存为png图片
cap.release()# 关闭调用的摄像头
