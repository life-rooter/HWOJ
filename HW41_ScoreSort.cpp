/*************************************************************************
	> File Name: HW41_ScoreSort.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Mon 24 Aug 2015 07:37:02 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
struct person
{
	char name[20];
	int score;
};
bool comp1(person a,person b )
{
	return a.score<b.score;
}
bool comp2(person a,person b)
{
	return a.score>b.score;
}
int main()
{
	int N,flag;
	while(cin>>N)
	{
		person array[100];
		cin>>flag;
		for(int i=0;i<N;i++)
			cin>>array[i].name>>array[i].score;
		if(flag==0)
			sort(array,array+N,comp2);
		if(flag==1)
			sort(array,array+N,comp1);
		for(int i=0;i<N;i++)
			cout<<array[i].name<<" "<<array[i].score<<endl;
		break;
	}
}
