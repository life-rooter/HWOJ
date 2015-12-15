/*************************************************************************
	> File Name: HW_Chros.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Mon 07 Sep 2015 08:59:13 PM CST
 ************************************************************************/
/*
#include<iostream>
using namespace std;
//const int max=100;
#define max 100
//const int max=100;//bug: const int can't be the length of array left[] /right[] /a[]?

int main()
{
	int n;
	int a[max];
	int left[max];
	int right[max];
	cin>>n;
	if(n<=0)
		return -1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i] ;
		if(a[i]<0)
			return -1;
	}
	for(int i=1;i<n;i++)
	{
		left[i]=1;
		for(int j=1;j<i;j++)
			if(a[i]>a[j]&&left[i]<left[j]+1)
				left[i]=left[j]+1;
	}
	for(int i=n;i>=1;i--)
	{
		right[i]=1;
		for(int j=i+1;j<=n;j++)
			if(a[i]>a[j]&&right[i]<right[j]+1)
				right[i]=right[j]+1;
		}
	int num=0;
	for(int i=1;i<=n;i++)
		if(num<right[i]+left[i]-1)
			num=right[i]+left[i]-1;
	cout<<n-num<<endl;
	
	system("pause");
	return 0;
}
一测试用例未通过*/ 

#include <iostream>

#include <string>

using namespace std;

int main()

{

    int len,i;

    cin >> len;

    int *A = new int[len];

    for(int i=0; i<len; ++i)

        cin >> A[i];



    // lis[i]表示以A[i]为结尾的最长递增子序列的长度

    int *lis = new int[len];  

    // lds[i]表示以A[i]为起点的最长递减子序列的长度

    int *lds = new int[len];



    for ( i = 0; i < len; ++i) 

    {

        lis[i] = 1;

        lds[i] = 1;

    }



    for( i=1; i<len; ++i)

        for(int j=0; j<i; ++j)

            if(A[i] > A[j] && lis[i] < lis[j]+1)

                lis[i] = lis[j] + 1;



    for(i=len-2; i>=0; --i)

        for(int j=len-1; j>i; --j)

            if(A[i] > A[j] && lds[i] < lds[j]+1)

                lds[i] = lds[j] + 1;



    int maxl = 0;

    for(i=0; i<len; ++i)

        if(maxl < lis[i]+lds[i])

            maxl = lis[i] + lds[i];



    cout << len - maxl + 1 << endl;


    delete [] lis;

    delete [] lds;

    delete [] A;



    return 0;

}


/* wrong!!!!
#include<iostream>
#include<vector>
//#include<algorithm>
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
*/
