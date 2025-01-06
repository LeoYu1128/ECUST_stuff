#include <stdio.h>
int main()
{
	float father_Height,mother_Height;
	float pre_Height;
	printf("请输入父亲身高：\n");
	scanf("%f",&father_Height);
	printf("请输入母亲身高：\n");
	scanf("%f",&mother_Height);
	pre_Height=(father_Height*0.96+mother_Height)/2.0;
	printf("你长大后身高为%.2fcm",pre_Height);
	return 0;
}