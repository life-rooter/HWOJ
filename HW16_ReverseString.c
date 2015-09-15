/*************************************************************************
	> File Name: HW16_ReverseString.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Tue 15 Sep 2015 07:57:38 PM CST
 ************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
int len,i;
char a[256] = {'\0'};
gets(a);
len = strlen(a);
for(i=len-1;i>=0;i--)
printf("%c",a[i]);
printf("\n");
}
