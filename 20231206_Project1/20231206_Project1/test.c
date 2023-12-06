//_CRT_SECURE_NO_WARNINGS用来解决使用scanf时提示的不安全错误，也可以到
//VS安装路径下找到newc++file.cpp然后将“#define _CRT_SECURE_NO_WARNINGS 1”加入其中保持
//这样后续新建.c文件时就会在第一行加上这一句
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
static int test1()
{
	//创建一个变量
	//格式： 数据类型 变量的名称 = 初始值；即数据类型是用来创建变量的
	int age = 20;
	double price = 152.3;
	float hig = 65.4;
	//输出float类型的变量使用占位符%f,输出double类型数据使用占位符%lf
	printf("%d\n", age);
	printf("%f\n", hig);
	printf("%lf\n", price);
	return 0;
}

//括号外的变量a为全局变量
int a = 100;
static int test2()
{
	//括号内的变量a为局部变量
	int a = 10;
	//SPOT: 当局部变量和全局变量名字冲突时，局部优先
	printf("%d", a);  //输出10
	return 0;
}

//scanf的作用是从键盘输入值
//&为取地址符，比如&a就是将键盘输入的值保存到a地址下
int main()
{
	int a = 10;
	int b = 20;
	scanf("%d %d", &a, &b);
	int sum = 0;
	sum = a + b;
	printf("求和结果是%d", sum);

}