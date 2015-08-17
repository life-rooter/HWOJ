#include<stdio.h>
int main()
{
 float a;
	while(scanf("%f",&a)!=EOF)
	{
		if(a>0)
			printf("%d\n",(int)(a+0.5));
		else
			printf("%d\n",(int)(a-0.5));
	}
}
