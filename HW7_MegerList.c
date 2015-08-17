#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	int c[100];
	int a,b;
	char d;
/*当在scanf中加入换行符读取数字时，bug出现，要比预定读书如一个数字才读取完？？？/
 *
 * */
	while(scanf("%d",&n)!=EOF)
	{

		//fflush(stdin);
		memset(c,-1,sizeof(int)*100);
		for(i=0;i<n;i++)
		{	
			scanf("%d",&a);
		//	fflush(stdin);
			scanf("%d",&b);
		//	fflush(stdin);//otherwise '\n'  will be got by n in while() loop
			if(c[a]!=-1)
				c[a]+=b;
			else
				c[a]=b;
		}
		for(i=0;i<n;i++)
			if(c[i]!=-1)
				printf("%d\n%d\n",i,c[i]);
	//	fflush(stdin);
	}
}
