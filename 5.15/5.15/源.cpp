#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//p��ָ�����
//	return 0;
//}
int main()
{
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(double*));
	int a = 0x11223344;//һ����4bit
	int *pa = &a;
	char *pc = &a;
	printf("%p\n", pc);
	return 0;//64λ���ԣ�ָ��Ĵ�СΪ8�ֽ�

}