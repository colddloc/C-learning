#include<stdio.h>    //����Ԥ��������ͷ�ļ���stdio.h��
int main()    //������
{
	int min(int a,int b);    //�Ա�������min����������
	int a1,a2,a3,result;    //����4�����ͱ���a1,a2,a3,result
	printf("����������ѧ�������䣺");
	scanf("%d,%d,%d",&a1,&a2,&a3);    //�Ӽ����������a1��a2��a3��ֵ
	result=min(a1,a2);
	result=min(result,a3);
	printf("��С����ֵΪ��%d\n",result);    //����result��ֵ
	return 0;    //ʹ��������ֵΪ0
}

int min(int a,int b)    //����min����������ֵΪ���ͣ���ʽ����a��bΪ����
{
	int c;    //�������c
	if(a<b)    //��a��b�еĽ�Сֵ����c
		c=a;    
	else
		c=b;
	return c;    //��c��ֵ���ص�min�����ı����ô�
}