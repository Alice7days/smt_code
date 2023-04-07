#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 5;
	//两数交换,不创建临时变量 int temp
	printf("before: a=%d,b=%d\n", a, b);
	//加减法(如果两数太大则不适合用，可能会溢出)
	//a = a + b;//15
	//b = a - b;//10
	//a = a - b;//15-10
	printf("after:a=%d,b=%d\n", a, b);
	//异或的算法
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after:a=%d,b=%d\n", a, b);
	return 0;

}
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d",&num);
	while (num)
	{
		if (num % 2 == 1)
		{
			count++;
			
		}
		num = num / 2;
	}
	printf("%d\n", count);
	return 0;
}

int main()
{
	int num = 0;
	int i = 0;
	int count = 0;
	scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}