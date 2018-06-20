#include<stdio.h>
void main()
{
	int a,b,c,d,e,sum;
	float aver;
	printf("Input 5 integers: "); /*输入提示语，提示输入五个整数成绩*/
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);/*输入任意五个整数成绩*/
	sum=a+b+c+d+e;
	aver=sum/5;
	printf("average=%f\n",aver);
}