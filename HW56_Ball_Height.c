/*************************************************************************
	> File Name: HW56_Ball_Height.c
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Sat 29 Aug 2015 08:38:59 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
void main()
{
	float h;
	scanf("%f",&h);
	printf("%g\n",h+2*h*(1-pow(0.5,4)));
	printf("%g\n",h*pow(0.5,5));
}
