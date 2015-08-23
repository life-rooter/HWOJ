/*************************************************************************
	> File Name: HW48_GetLeastNumber.c
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Sun 23 Aug 2015 09:00:46 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int N,K;
	cin>>N;
	cin>>K;
	vector<int> array;
	for(int i=0;i<N;i++)
	{
		int m;
		cin>>m;
		array.push_back(m);
	}
	sort(array.begin(),array.end());
	for(int i=0;i<K;i++)
	{
		cout<<array[i];
		if(i==K-1)
		{
			cout<<endl;
			break;
		}
		cout<<' ';
	}
}


