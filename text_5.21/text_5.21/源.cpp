#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int* test()
//{
//	//a 为局部变量出了test（）会消亡，因此返回的是a，但是a的空间没了 形成野指针
//	int a = 10;
//	return &a;
//}
int main()
{
	//指针未初始化，产生野指针
	//int* p;
	//*p = 20;
	//下标访问越界
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i <= 12; i++)
	//{
	//	*p = i;
	//	p++;
	//}
	//int* p = test();
	//printf("%d\n", *p);
	//指针加法
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *p);
		p = p + 1;
	}*/

	return 0;
}