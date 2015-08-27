/*************************************************************************
	> File Name: HW50_YangTriangle.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Thu 27 Aug 2015 01:51:59 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
/*
#define MAX 100
int triangle(int n)
{
	int a[MAX][MAX];
	for(int i=0;i<n;i++)
		for(int j=0;j<=2*i;j++)
		{
			if(j==0)a[i][j]=1;
			else if(j==1)
			{
				if(i>1)a[i][j]=a[i-1][j-1]+a[i-1][j];
				else a[i][j]=1;
			}
			else if(j<=i)a[i][j]=a[i-1][j-2]+a[i-1][j-1]+a[i-1][j];
			else a[i][j]=a[i][2*i-j];
		}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=2*i;j++)
			cout<<a[i][j]<<' ';
		cout<<endl;
	}
	for(int j=0;j<n;j++)
		if(a[n-1][j]%2==0)
		{ 
			cout<<j+1<<endl;
			return 0;
		}
	return -1;
}
*/
int triangle(int n,int i)
{
	if(i==1||i==n*2-1)
		return 1;
	if(i<1||i>n*2-1)
		return 0;
	else
		return triangle(n-1,i-2)+triangle(n-1,i-1)+triangle(n-1,i);
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		if(triangle(n,i)%2==0)
		{
			cout<<i<<endl;
			return 0;
		}
	cout<<"-1"<<endl;

}
