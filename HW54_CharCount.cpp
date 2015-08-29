/*************************************************************************
	> File Name: HW54_CharCount.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Sat 29 Aug 2015 09:27:27 PM CST
 ************************************************************************/
#include<iostream>
#include <string>
using namespace std; 
int main()
{
	int countA=0,countspace=0,countnumber=0,countother=0;
	string str;
	getline(cin,str);
	for(int i=0; i<str.length(); i++)
	{
		if(str[i]>='a' &&str[i]<='z' || str[i]>='A' &&str[i]<='Z')
			countA++;
		else if(str[i]>='0' &&str[i]<='9')
			countnumber++;
		else if(str[i]==' ')
			countspace++;
		else
			countother++;
	}
         cout<<countA<<endl;
	 cout<<countspace<<endl;
	 cout<<countnumber<<endl;
	 cout<<countother<<endl;
}

