/*************************************************************************
	> File Name: HW73_Has7.c
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Thu 03 Sep 2015 03:26:24 AM CST
 ************************************************************************/

#include<stdio.h>
void numberof7(int n)
{
	int i,j,flag;
	int count=0;
	for(i=1;i<=n;i++)	
	{
		flag=1;
		if(i%7==0)
		{
			count++;
			flag=0;
		}
		j=i;
		while(flag&&j)
		{
			if(j%10==7)
			{
				count++;
				break;
			}
			j=j/10;
		}
	}
	printf("%d\n",count);
}
int main()
{
	int k ;
	scanf("%d",&k);
	numberof7(k);
}
