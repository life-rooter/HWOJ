/*************************************************************************
	> File Name: HW49_PefectNum.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Wed 26 Aug 2015 10:31:40 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int count(long int n)
{
	int sum=1;
	if(n==1) return 0;
	for(int i=2;i<=n/2.0;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	if(sum==n) return 1;
	return 0;
}
int main()
{
	long int n;
	int cnt=0;
	cin>>n;
	if(n<=0||n>500000) return -1;
	for(int i=1;i<=n;i++)
		if(count(i))
			cnt++;
	cout<<cnt<<endl;
}
