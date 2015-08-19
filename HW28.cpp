#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a[4];
	
	while(scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]))
	{   int flag=1;
		for(int i=0;i<4;i++)
			if(a[i]<0||a[i]>255)
			 {flag=0;break;}
			if(flag)printf("YES\n");
			else printf("NO\n");

	}
}