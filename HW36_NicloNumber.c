#include<stdio.h>

void GetNumberSequence(int a)
{
	int i,j,sum=0,sum1;
	sum1=a*a*a;
	for(i=1;i<100000;i+=2)
	{
		sum=0;
		for(j=0;j<a;j++)
			sum+=i+2*j;
		if(sum==sum1)
			break;
	}
	for(j=0;j<a-1;j++)
		printf("%d+",i+2*j);
	printf("%d\n",i+2*j);
}
int main()
{
	int m;
	while(scanf("%d",&m),m)
	GetNumberSequence(m);
}