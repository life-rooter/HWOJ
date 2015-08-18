#include<stdio.h>

int Drink(int n)
{
	int count=0;
	while(n>=3)
	{
		count+=n/3;
		n=n/3+n%3;
	}
	if(n<=1)
		return count;
	if(n==2)
		return count+1;
}
int main()
{
	int c;
	while(scanf("%d",&c),c)
	{
		printf("%d\n",Drink(c));
	}
}