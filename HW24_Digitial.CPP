#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isdigital(char c)
{
	if(c>='0'&&c<='9')
		return 1;
	return 0;
}
int main()
{
	int state=0;

                                                               
	char *a="as3d2345d";
	char b[20];
	int i=0,j=0;
	for(i=0;i<strlen(a);)
	{
		if(isdigital(a[i])&&state==0)//state=0;previous is not digital
			{
				b[j++]='*';
				b[j++]=a[i++];
				state=1;
			}
		else if(isdigital(a[i])&&state==1)//state =1 ;previous is digital
		{
			b[j++]=a[i++];
		}
		else if(!isdigital(a[i])&&state==1)
		{
			b[j++]='*';
			b[j++]=a[i++];
			state=0;
		}
		else if(!isdigital(a[i])&&state==0)
		{
			b[j++]=a[i++];
		}
	}
	if(isdigital(b[j-1]))
	{
		b[j]='*';b[j+1]='\0';
	}
	else
	b[j]='\0';
	printf("%s",b);
	getchar();
}