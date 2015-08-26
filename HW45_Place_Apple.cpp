/*************************************************************************
	> File Name: HW45_Place_Apple.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Wed 26 Aug 2015 01:35:16 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
long place_apple(int numofapples,int numofplates)
{
	if(numofapples==0||numofplates==1)
		return 1;
	if(numofapples<numofplates)
		return place_apple(numofapples,numofapples);
	return place_apple(numofapples,numofplates-1)+place_apple(numofapples-numofplates,numofplates);
}
int main()
{
	int m,n;
	cin>>m>>n;
	if(m>=0&&m<=10&&n>=1&&n<=10)
	{
	cout<<place_apple(m,n)<<endl;
	}
	else 
	return -1;
}
