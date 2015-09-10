/*************************************************************************
	> File Name: HW26_LongestNum.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Thu 10 Sep 2015 07:24:29 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int longest_num(string c)
{
	int count=0,max=0,pos=0;
	if(c.size()==0)
	{
		cout<<'0';
		return 0;
	}
	pos=0;
	for(int i=0;i<c.size();++i)
	{
		count=0;
		while(i<c.size()&&c[i]>='0'&&c[i]<='9')
		{
			++i;
			++count;
		}
		if(count>max){max=count;pos=i-count;}
	}
	if(max==0) cout<<'0'<<endl;
	else 
{
	for(int i=pos;i<pos+count;++i)
		cout<<c[i];
	cout<<','<<count<<endl;
}
}
int main()
{
	string str;
	getline(cin,str);
        longest_num(str);
}
