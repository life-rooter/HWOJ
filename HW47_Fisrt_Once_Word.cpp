/*************************************************************************
	> File Name: HW47_Fisrt_Once_Word.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Wed 26 Aug 2015 09:26:09 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
void first_once_word(char*s)
{
	int hash[256];
	memset(hash,0,sizeof(hash));
	char *p=s;
	while(*p)
	{
		hash[*p]++;
		p++;
	}
	while(*s)
	{
		if(hash[*s]==1)
		{
			cout<<*s<<endl;
			return;
		}
		s++;
	}
	cout<<'.'<<endl;
}
int main()
{
	char s[100];
	cin.getline(s,100);
	first_once_word(s);
}
