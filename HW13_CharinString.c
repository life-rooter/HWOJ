/*************************************************************************
	> File Name: HW13_CharinString.c
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Sun 13 Sep 2015 09:16:05 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
	char s[128];
	char p;
	int count=0,i;
	gets(s);
//	getchar();
	scanf("%c",&p);
	for(i=0;i<strlen(s);++i)
		if(s[i]==p)
			count++;
	printf("%d\n",count);
}
