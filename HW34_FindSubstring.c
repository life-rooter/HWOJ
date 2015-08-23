#include <stdio.h>
#include<string.h>

int main()
{
	char a[100],b[50];
	int flag=0;
	int i,j;
	gets(b);
	gets(a);
	for(i=0; b[i]!='\0'; i++)
		for(j=0; a[j]!='\0'; j++)
			if(b[i]==a[j])
			{
				flag++;
				break;
			}
			if(flag==strlen(b))
				printf("true\n");
			else
				printf("false\n");
			getchar();
}