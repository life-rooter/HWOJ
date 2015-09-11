/*************************************************************************
	> File Name: HW_Weighfama.c
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Fri 11 Sep 2015 03:02:33 PM CST
 ************************************************************************/
#include <stdio.h>  

int x[99],m[99],f[99999];  
  
int main()  
{  
    int n,i,j,k,M=0,num=0; 
		 scanf("%d",&n);
    for(i=1;i<=n;i++)  
        scanf("%d",&m[i]);  
    for(i=1;i<=n;i++)  
        scanf("%d",&x[i]);  
  
    for(i=1;i<=n;i++)  
        M+=m[i]*x[i];  
    f[0]=1;  
    for(i=1;i<=n;i++)  
        for(j=M;j>=0;j--)  
            for(k=1;k<=x[i];k++)  
            {  
                f[j]=f[j]|f[j-k*m[i]];  
            }  
    for(i=0;i<=M;i++)  
        if(f[i])num++;  
    printf("%d\n",num); 
    return 0;  
}  

