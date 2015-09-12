/*************************************************************************
	> File Name: HW17_Negative.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Sat 12 Sep 2015 08:34:46 PM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,count=0,num=0;
	int a[100];
	int total=0;
	float aver=0;
	cin>>n;
	for(int i=0;i<n;++i)
	{	
		cin>>a[i];
	   if(a[i]<0)
			++count;
		else if(a[i]>0)
		{
			total+=a[i];
			++num;
		}
	}
	if(total%num==0)
	{
		printf("%d %d\n",count,total/num);
	}
	else
	{
		printf("%d %.1f\n",count,total*1.0/num);
	}
}
