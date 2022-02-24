#include<stdio.h>    //编译预处理，包含头文件“stdio.h”
int main()    //主函数
{
	int min(int a,int b);    //对被调函数min作函数声明
	int a1,a2,a3,result;    //定义4个整型变量a1,a2,a3,result
	printf("请输入三个学生的年龄：");
	scanf("%d,%d,%d",&a1,&a2,&a3);    //从键盘输入变量a1，a2，a3的值
	result=min(a1,a2);
	result=min(result,a3);
	printf("最小年龄值为：%d\n",result);    //输入result的值
	return 0;    //使函数返回值为0
}

int min(int a,int b)    //定义min函数，函数值为整型，形式参数a、b为整型
{
	int c;    //定义变量c
	if(a<b)    //将a、b中的较小值赋给c
		c=a;    
	else
		c=b;
	return c;    //将c的值返回到min函数的被调用处
}