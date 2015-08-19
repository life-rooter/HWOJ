#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
bool Compare1(const int &a,const int &b)
{
	return a>b;
}
bool Compare2(const int &a, const int &b)
{
	return a<b;
}
int main()
{
	int N;
	cin>>N;
	vector<int> a;
	for(int i=0;i<N;i++)
	{
		int m;
		cin>>m;
		a.push_back(m);
	}
	int flag;
	cin>>flag;
	if(flag==1)
		sort(a.begin(),a.end(),Compare1);
	else if (flag==0)
		sort(a.begin(),a.end(),Compare2);
	for (int i=0;i<a.size();i++)
		cout<<a[i];
	system("pause");
		


		
}