/*************************************************************************
	> File Name: HW70_PasswdValidate.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Wed 09 Sep 2015 07:28:45 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

bool passwd_validate(string s)
{
	int flag1=0,flag2=0,flag3=0,flag4=0;
	if(s.size()<8)
		return false;
	for(int i=0;i<s.size();++i)
	{
		if(s.find(s.substr(i,3),i+1)!=string::npos)
			return false;
	}
	for(int i=0;i<s.size();++i)
	{
		if(s[i]>='a'&&s[i]<='z')
			flag1=1;
		else if(s[i]>='A'&&s[i]<='Z')
			flag2=1;
		else if(s[i]>='0'&&s[i]<='9')
			flag3=1;
		else
			flag4=1;
	}
	if(flag1+flag2+flag3+flag4<3)
		return false;
	return true;

}
int main()
{
	string str;

	while(getline(cin,str))
{
	if(passwd_validate(str))
		cout<<"OK"<<endl;
	else
		cout<<"NG"<<endl;
}
}
