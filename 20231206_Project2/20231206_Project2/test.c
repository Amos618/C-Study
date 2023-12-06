/*
	初始变量的作用域和生命周期
	1.局部变量的作用域是变量所在的局部范围
	2.全局变量的作用域是整个工程
	3.局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束
	4.全局变量的生命周期是：整个程序的生命周期
*/
#include<stdio.h>
//extern是一个关键字，用于声明一个变量或函数是在其他文件中定义的。
//它用于在当前文件中引用其他文件中定义的全局变量或函数。
extern int db;   
int main()
{
	{
		int a = 5;
		printf("%d\n", a);
	}
	// printf("%d", a);  变量a是局部变量，只在代码块中有作用，其生命周期在出代码块时结束
	printf("%d\n", db); //即变量db代表的是全局变量，在整个工程文件中起作用，其生产周期是整个程序的周期
	return 0;
}