/*************************************************************************
	> File Name: HW60_IP2Interge.c
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Wed 02 Sep 2015 01:41:06 PM CST
 ************************************************************************/

#include<stdio.h>
int ip_covert(char *s,long int n)
{
	int i;
	int ip[4]={0};
	char buf[3];
	sscanf(s,"%d.%d.%d.%d",&ip[0],&ip[1],&ip[2],&ip[3]);
	if(ip[0]<0||ip[0]>255||ip[1]<0||ip[1]>255||ip[2]<0||ip[2]>255||ip[3]<0||ip[3]>255)
		return -1;
	printf("%ld\n",ip[0]*256*256*256+ip[1]*256*256+ip[2]*256+ip[3]);
	for(i=3;i>=0;i--)
	{
		ip[i]=n%256;
		n=n/256;
	}
	sprintf(buf,"%d.%d.%d.%d",ip[0],ip[1],ip[2],ip[3]);
	printf("%s\n",buf);
	return 0;
}
int main()
{
	long int n;
	char str[30];
	gets(str);
	scanf("%ld",&n);
	ip_covert(str,n);
}
