/*************************************************************************
	> File Name: HW39_DatetoDay.c
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Sat 22 Aug 2015 06:50:11 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int isleapyear(int year)
{
	if(year%4==0&&year%100!=0||year%400==0)
		return 1;
	return 0;
}
int Date2Day(int year,int month,int day)
{
	int count=0;
	int mon[12]={0,31,60,91,121,152,182,213,244,274,305,335};
    if(isleapyear(year)||!isleapyear(year)&&month<=2)//not leap year ,month 1 and 2 no need minus 1
			return mon[month-1]+day;
	return mon[month-1]+day-1;
}
int main()
{
   int year,month,day;
   while(scanf("%d%d%d",&year,&month,&day))
   printf("%d\n",Date2Day(year,month,day));
}
