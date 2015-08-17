#include<stdio.h>
int GCD(int a,int b)//greatest common divisor
{
	if(b==0)
		return a;
	else
		return GCD(b,a%b);
}
int LCM(int a,int b)//leastest common multiple
{
//	if(a==0||b==0) 
	return a*b/GCD(a,b);
}
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
		printf("%d\n",LCM(a,b));

}
