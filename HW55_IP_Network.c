/*************************************************************************
	> File Name: HW55_IP_Network.c
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Fri 28 Aug 2015 10:05:25 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int IP_Network(char *p1,char *p2,char *p3)
{
	int i;
	int ip1[4]={0};
	int ip2[4]={0};
	int ip3[4]={0};
	if(!p1||!p2||!p3)
		return 1;
	sscanf(p1,"%d.%d.%d.%d",&ip1[0],&ip1[1],&ip1[2],&ip1[3]);
	sscanf(p2,"%d.%d.%d.%d",&ip2[0],&ip2[1],&ip2[2],&ip2[3]);
	sscanf(p3,"%d.%d.%d.%d",&ip3[0],&ip3[1],&ip3[2],&ip3[3]);
	for(i=0;i<4;i++)
		if(ip1[i]<0||ip1[i]>255||ip2[i]<0||ip2[i]>255||ip3[i]<0||ip3[i]>255)
			return 1;
	if((ip1[0]&ip3[0])==(ip2[0]&ip3[0]))
		if((ip1[1]&ip3[1])==(ip2[1]&ip3[1]))
			if((ip1[2]&ip3[2])==(ip2[2]&ip3[2]))	
				if((ip1[3]&ip3[3])==(ip2[3]&ip3[3]))
					return 0;
	  return 2;
}
int main()
{
	char s1[30],s2[30],s3[30];
	gets(s1);gets(s2);gets(s3);
	printf("%d\n",IP_Network(s2,s3,s1));

}
