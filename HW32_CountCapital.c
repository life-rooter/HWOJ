#include<stdio.h>
#include<string.h>

int CalCapital(char *s)
{
	int n=0;
	while(*s!='\0')
	{
		if(*s>='A'&&*s<='Z')
			++n;
		++s;
	}
	return n;
}
int main()
{
	char s[100];
	while(fgets(s,100,stdin)!=NULL)
	{
		if(s[strlen(s)-1]=='\n')
			s[strlen(s)]='\0';
		printf("%d\n",CalCapital(s));

	}
}