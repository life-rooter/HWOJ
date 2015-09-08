/*************************************************************************
	> File Name: HW64_StringEncry.c
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Tue 08 Sep 2015 09:33:25 PM CST
 ************************************************************************/
#include<stdio.h>
#include<string.h>

void Encrypt(char *s)
{
	char b[26]="bcdefghijklmnopqrstuvwxyza";
	int i=0;
	char *c=s;
	for(i=0;i<strlen(c);++i)
	{
		if(c[i]>='a'&&c[i]<='z')
			c[i]=b[c[i]-'a']-32;
		else if(c[i]>='A'&&c[i]<='Z')
			c[i]=b[c[i]-'a'];
		else if(c[i]>'0'&&c[i]<'9')
			c[i]=(c[i]-'0'+1)%10+'0';
//		printf("%c",c[i]);
	}
	printf("%s\n",c);
}
void Unencrypt(char *c)
{
	char d[26]="zabcdefghijklmnopqrstuvwxy";
	int i;
	char *s=c;
		for(i=0;i<strlen(s);++i)
		{
			if(s[i]>='a'&&s[i]<='z')
				s[i]=d[s[i]-'a']-32;
			else if(s[i]>='A'&&s[i]<='Z')
				s[i]=d[s[i]-'A'];
			else if(s[i]>='0'&&s[i]<='9')
				s[i]=(s[i]-'0'+9)%10+'0';
		}
	printf("%s\n",s);

}
int main()
{
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	Encrypt(str1);
	Unencrypt(str2);
}
