#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//�����÷�
//	int a = 0;
//	if (!a)//aΪ��ʱ��ͨ����
//	{
//		printf("ojj");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַa
//	*p = 15;//������
//	printf("%d", a);
//}
//�ṹ�� ѧ��
struct Stu//������һ������
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	//s1 �Ǳ��� struct Stu���������������
	struct Stu s1 = { "����",20,"22230209" };
	struct Stu* ps = &s1;
	printf("%s\n", ps->name);
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
}