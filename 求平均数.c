#include<stdio.h>
void main()
{
	int a,b,c,d,e,sum;
	float aver;
	printf("Input 5 integers: "); /*������ʾ���ʾ������������ɼ�*/
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);/*����������������ɼ�*/
	sum=a+b+c+d+e;
	aver=sum/5;
	printf("average=%f\n",aver);
}