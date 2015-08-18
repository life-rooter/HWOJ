#include<stdio.h>
#include<string.h>

void DeleteMinChar(char *s)
{
	int hash[256];
	char *p=s;//init p
	memset(hash,0,sizeof(hash));
	while(*p!='\0')
		++hash[*p++];
	int min=10000;
	p=s;//reset p
	while(*p!='\0')
		{if(min>hash[*p])
			min=hash[*p];//else
	++p;}
	p=s;
	while(*p!='\0')
		{if(hash[*p]!=min)
			printf("%c",*p);
		++p;
		}
	printf("\n");
	
}
int main()
{
	char s[100];
	fgets(s,100,stdin);
	if(s[strlen(s)-1]=='\n')
		s[strlen(s)-1]='\0';
	 DeleteMinChar(s);
	// getchar();
}