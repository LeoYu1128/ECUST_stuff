import face_recognition
import cv2
# 获取摄像头
video_capture = cv2.VideoCapture(0)
# 获取第一个人脸部特征码
ypf_image = face_recognition.load_image_file("yzq.png")
ypf_face_encoding = face_recognition.face_encodings(ypf_image)[0]
# 获取第二个人脸部特征码
yzy_image = face_recognition.load_image_file("yzy.png")
yzy_face_encoding = face_recognition.face_encodings(yzy_image)[0]
#脸部特征码数组
known_face_encodings = [
    ypf_face_encoding,
    yzy_face_encoding
]
#姓名数组与特征码对应
known_face_names = [
    "yzq",
    "yzy"
]
#一直循环获取摄像头截图并识别和标注
while True:
    # 获取一帧画面
    ret, frame = video_capture.read()
    # 转换为识别程序需要的格式
    rgb_frame = frame[:, :, ::-1]
    # 获取画面中的所有人脸位置及人脸特征码
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    # 对获取的每个人脸进行识别比对
    for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
        # 对其中一个人脸的比对结果（可能比对中人脸库中多个人脸）
        matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
        name = "Unknown"
        # 默认只认为是比对中的第一个人脸.
        if True in matches:
            first_match_index = matches.index(True)
            name = known_face_names[first_match_index]
        #在人脸上画一个框
        cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)
        # 在框底部画一个文本框，并标注姓名
        cv2.rectangle(frame, (left, bottom - 35), (right, bottom), (0, 0, 255), cv2.FILLED)
        font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, name, (left + 6, bottom - 6), font, 1.0, (255, 255, 255), 1)
    # 显示标注后的帧
    cv2.imshow('Video', frame)
    # 在1ms后检测是否按了 'q'键退出!
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
# 释放摄像头占用，关闭窗口
video_capture.release()
cv2.destroyAllWindows()

