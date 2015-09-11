#include <iostream>
#include <string>
using namespace std;
int main()
{
string str;
getline(cin, str);
string str2(str.rbegin(), str.rend());
cout << str2 << endl;
return 0;
}
