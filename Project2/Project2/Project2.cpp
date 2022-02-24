#include<stdio.h>
int main()
{
	printf("%d\n",9128);    //打印一个整数
	printf("哈\n");
	printf("%d\n",01654);    //？？？\

	/*sizeof()-计算类型或者变量所占空间的大小（字节、byte）
	bit-比特位
	byte（B）-字节=8bit
	kb,mb,gb,tb,pb
	*/
	printf("%d\n",sizeof(char));    //1  字符数据类型
    printf("%d\n",sizeof(short));    //2  短整型
	printf("%d\n",sizeof(int));    //4  整型
	printf("%d\n",sizeof(long));    //4  长整型
	printf("%d\n",sizeof(long long));    //8  更长的整型
	printf("%d\n",sizeof(float));    //4  单精度浮点数
	printf("%d\n",sizeof(double));    //8  双精度浮点数
	short a=65536;    //数值溢出，与2^16（短整型大小）求模
	char b=256;
	printf("%d\n",a);
	printf("%d\n",b);
	
	return 0;
}