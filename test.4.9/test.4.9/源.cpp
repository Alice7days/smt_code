#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//！的用法
//	int a = 0;
//	if (!a)//a为假时，通过。
//	{
//		printf("ojj");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址a
//	*p = 15;//解引用
//	printf("%d", a);
//}
//结构体 学生
struct Stu//建立了一个类型
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	//s1 是变量 struct Stu是这个变量的类型
	struct Stu s1 = { "张三",20,"22230209" };
	struct Stu* ps = &s1;
	printf("%s\n", ps->name);
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
}