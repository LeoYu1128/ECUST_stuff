#include <stdio.h>
int main()
{
	float father_Height,mother_Height;
	float pre_Height;
	printf("�����븸����ߣ�\n");
	scanf("%f",&father_Height);
	printf("������ĸ����ߣ�\n");
	scanf("%f",&mother_Height);
	pre_Height=(father_Height*0.96+mother_Height)/2.0;
	printf("�㳤������Ϊ%.2fcm",pre_Height);
	return 0;
}