#include<stdio.h>
#include<string.h>

void PrintIn8(char *s)
{
	Complet(s);
	int len=strlen(s),i;
	for(i=0;i<=len-1;i++)
	{
		printf("%c",s[i]);
		if((i+1)%8==0)
			printf("\n");
	}
}
Complet(char *s)
{
	char *p=s;
	int i;
	int len=strlen(s);
	if(len%8!=0)
	{
		for(i=len;i<(len/8+1)*8;i++)
			p[i]='0';
		p[i]='\0';
	}
}
int main()
{
	char s[101];
	while(fgets(s,100,stdin)!=NULL)
	{
		int len=strlen(s);
		if(s[len-1]=='\n')
			s[len-1]='\0';
		PrintIn8(s);
	}
}
