/*************************************************************************
	> File Name: HW_Chros.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Mon 07 Sep 2015 08:59:13 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int chros(vector<int>height)
{
	int n=height.size();
	int count=0,max=0;
	if(n==0)
		return 0;
	for(int i=0;i<n;++i)
	{
		count=0;
		int t=i;//初始化
		for(int j=i-1;j>=0;--j)
		{
			if(height[i]>height[j])
			{
				if(height[j]<height[t])
				{
					 t=j;//存储上一个比height[i]小的值的位置
					count++;
				}
			}
		}
		t=i;//初始化上一个序列数的位置
		for(int j=i+1;j<n;j++)
		{
			
			if(height[j]>height[i])
			{   
				if(height[j]>height[t])
				{
					t=j;//存储上一个比height[i]大的值的位置
				count++;
				}
			}
		}
		if(count>max)
			max=count+1;
	}
	return n-max;

}
int main()
{
	int n;
	vector<int>h;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		int m;
		cin>>m;
		h.push_back(m);
	}
	cout<<chros(h)<<endl;
	//system("pause");
}
