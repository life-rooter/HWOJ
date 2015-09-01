/*************************************************************************
	> File Name: HW59_Snake_Matrix.c
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Mon 31 Aug 2015 10:54:58 PM CST
 ************************************************************************/


#include<stdio.h>
int a[100][100];
void matrix(int n)
{
	int i,j,k;	
	a[0][0]=1;
	for(i=1;i<n;++i)
	{
		a[i][0]=a[i-1][0]+i;
		for(k=i-1;k>=0;--k)
			a[k][i-k]=a[i][0]+i-k;
	}
		  
   for(i=0;i<n;++i)
   {
	   for(j=0;j<n-i;++j)
		{
		   if(j!=n-i-1)
		   printf("%d ",a[i][j]);
		   else
		   printf("%d",a[i][j]);
		}	
   printf("\n");
   }
}
int main()
{
	int n;
//	int a[100][100];
	scanf("%d",&n);
    	matrix(n);
	//getchar();
}
