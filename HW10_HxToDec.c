#include<stdio.h>
#include<string.h>
void Hex2Dec(char *s)
{
	int len=strlen(s);
	int i=len-1;
	int sum=0,factor=1;
	for(;i>1;i--)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			sum=sum+(s[i]-'0'+10)*factor;
			factor*=16;
		}
		else if(s[i]>='a'&&s[i]<='f')
		{
			sum+=(s[i]-'a'+10)*factor;
			factor*=16;
		}
		else if(s[i]>='A'&&s[i]<='F')
		{
			sum+=(s[i]-'A'+10)*factor;
			factor*=16;
		}
	}
	printf("%d\n",sum);
}
int main()
{
	char s[20];
	while(scanf("%s",s)!=EOF)
		Hex2Dec(s);
}
