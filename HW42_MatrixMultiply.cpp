/*************************************************************************
	> File Name: HW42_MatrixMultiply.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Mon 24 Aug 2015 10:13:24 PM CST
 ************************************************************************/
#include<iostream>
using namespace std;
int c[100][100]={0};
/*void Matrix_Multiply(int (*m1)[100],int (*m2)[100],int x,int y,int z )
{
	//int c[x][z];
	for(int i=0;i<x;i++)
		for(int j=0;j<z;j++)
			for(int k=0;k<y;k++)
				c[i][j] +=m1[i][k]*m2[k][j];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<z-1;j++)
			cout<<c[i][j]<<" ";
		cout<<c[i][z-1]<<endl;
	}  

}
*/
int main()
{
	int a[100][100],b[100][100];
	//	c[100][100]={0};
	int x,y,z;
	std::cin>>x>>y>>z;
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
			std::cin>>a[i][j];
	for(int i=0;i<y;i++)
		for(int j=0;j<z;j++)
			std::cin>>b[i][j];
	for(int i=0;i<x;i++)
		for(int j=0;j<z;j++)
			for(int k=0;k<y;k++)
				c[i][j] +=a[i][k]*b[k][j];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<z-1;j++)
			cout<<c[i][j]<<" ";
		cout<<c[i][z-1]<<endl;
	}  
	//Matrix_Multiply(a,b,x,y,z);


}
