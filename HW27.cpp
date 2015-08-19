#include<iostream>
using namespace std;

int fun(int m,int n)
{
	//if(m<=0||n<=0)//also 
		if(m==0||n==0)
		return 0;
	else if(m==1)
		return n+1;
	else if(n==1)
		return m+1;
	else
		return fun(m,n-1)+fun(m-1,n);
}
int main()
{
	int m,n;
	while(cin>>m>>n)
		cout<<fun(m,n)<<endl;
}