//_CRT_SECURE_NO_WARNINGS�������ʹ��scanfʱ��ʾ�Ĳ���ȫ����Ҳ���Ե�
//VS��װ·�����ҵ�newc++file.cppȻ�󽫡�#define _CRT_SECURE_NO_WARNINGS 1���������б���
//���������½�.c�ļ�ʱ�ͻ��ڵ�һ�м�����һ��
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
static int test1()
{
	//����һ������
	//��ʽ�� �������� ���������� = ��ʼֵ����������������������������
	int age = 20;
	double price = 152.3;
	float hig = 65.4;
	//���float���͵ı���ʹ��ռλ��%f,���double��������ʹ��ռλ��%lf
	printf("%d\n", age);
	printf("%f\n", hig);
	printf("%lf\n", price);
	return 0;
}

//������ı���aΪȫ�ֱ���
int a = 100;
static int test2()
{
	//�����ڵı���aΪ�ֲ�����
	int a = 10;
	//SPOT: ���ֲ�������ȫ�ֱ������ֳ�ͻʱ���ֲ�����
	printf("%d", a);  //���10
	return 0;
}

//scanf�������ǴӼ�������ֵ
//&Ϊȡ��ַ��������&a���ǽ����������ֵ���浽a��ַ��
int main()
{
	int a = 10;
	int b = 20;
	scanf("%d %d", &a, &b);
	int sum = 0;
	sum = a + b;
	printf("��ͽ����%d", sum);

}