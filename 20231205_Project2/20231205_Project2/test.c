/*
	目的:了解C语言的数据类型
*/

#include <stdio.h>
int main()
{
	//字符类型
	char ch = 'a';
	//整型
	int age = 12;
	//短整型
	short num = 10;
	//长整型
	long a = 23;
	//单双精度的区别，其存储所占字节数不同
	float f = 15.5;
	double d = 25.55;

	//sizeof -> c语言关键字，操作符。作用：计算类型或者变量所占空间的大小,单位是字节
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	//输出结果看P1.png

	return 0;
}
