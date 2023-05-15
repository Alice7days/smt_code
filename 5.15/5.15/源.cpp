#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//p是指针变量
//	return 0;
//}
int main()
{
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(double*));
	int a = 0x11223344;//一个数4bit
	int *pa = &a;
	char *pc = &a;
	printf("%p\n", pc);
	return 0;//64位电脑，指针的大小为8字节

}