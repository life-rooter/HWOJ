/*************************************************************************
	> File Name: HW46_NearPrimer.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Wed 26 Aug 2015 05:07:53 PM CST
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int x)
{
	if(x==2||x==3) return true;
	for(int i=2;i<=sqrt(1.0*x);i++)
		if(x%i==0) return false;
	return true;
}

int main()
{
	int n;
	cin>>n;
	if(n>5&&n<10000&&n%2==0)
	{
	for(int i=n/2;i>1;i--)
	
		if(isPrime(i)&&isPrime(n-i))
		{
			cout<<i<<'\n'<<n-i<<endl;
			break;
		}
	}
	else
		return -1;
}
