/*************************************************************************
	> File Name: HW57_Rabbit.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Sun 30 Aug 2015 07:44:21 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int Facbonali(int num)
{
	if(num==0)
			return 0;
	else if(num==1)
			return 1;
	else
		return Facbonali(num-1)+Facbonali(num-2);
}
int main()
{
	   int N;
	   cin>>N;
	   cout<<Facbonali(N)<<endl;
}
