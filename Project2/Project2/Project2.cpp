#include<stdio.h>
int main()
{
	printf("%d\n",9128);    //��ӡһ������
	printf("��\n");
	printf("%d\n",01654);    //������\

	/*sizeof()-�������ͻ��߱�����ռ�ռ�Ĵ�С���ֽڡ�byte��
	bit-����λ
	byte��B��-�ֽ�=8bit
	kb,mb,gb,tb,pb
	*/
	printf("%d\n",sizeof(char));    //1  �ַ���������
    printf("%d\n",sizeof(short));    //2  ������
	printf("%d\n",sizeof(int));    //4  ����
	printf("%d\n",sizeof(long));    //4  ������
	printf("%d\n",sizeof(long long));    //8  ����������
	printf("%d\n",sizeof(float));    //4  �����ȸ�����
	printf("%d\n",sizeof(double));    //8  ˫���ȸ�����
	short a=65536;    //��ֵ�������2^16�������ʹ�С����ģ
	char b=256;
	printf("%d\n",a);
	printf("%d\n",b);
	
	return 0;
}