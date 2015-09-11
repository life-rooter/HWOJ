/*************************************************************************
	> File Name: HW5_Char_Count.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Fri 11 Sep 2015 08:53:04 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;
int main()
{
string str;
int sum = 0;
int hash[128] = { 0 };
getline(cin, str);
//cin>>str;
string::iterator it;
for (it = str.begin(); it != str.end();it++)
{
if (*it >= 0 && *it <= 127)
{
hash[*it]++;
}
}
for (int i = 0; i < 128;i++)
{
if (hash[i])
sum++;
}
cout << sum<<endl;

}
