#include<stdio.h>
#include<string.h>
void LongestHw(char *s)
{
	int i=0,j=0;
	int count=1,flag=1,tempi,max=0,posi=0;
	for(i=0;i<(strlen(s)-1);++i)
	{	tempi=i;flag=1;
		for(j=(strlen(s)-1);j>=i;--j)
		{   
			if(flag==1)//Ö»ÄÜ³õÊ¼»¯ÐÞ¸Äcount,j»á±ä
			  count=j-i;
			if(j>=tempi&&s[j]==s[tempi])
				{
				++tempi;
				flag=0;
				}
			else if(j>=tempi)
			{
				if(flag==0)
				{
					count=0;
					break;
				}
			}
		}
		if(count>max)
		{
			posi=i;
			max=count;
		}
	}
<<<<<<< HEAD
	/*for(i=posi;i<=posi+max;i++)
=======
/*	for(i=posi;i<=posi+max;i++)
>>>>>>> d194fbe7e89b84d17b0ac836f24adafef8bbba45
	{
		printf("%c",s[i]);
	}
*/
	printf("%d\n",max+1);

}
int main()
{
	char s[20];
	while(fgets(s,20,stdin)!=NULL)
	{
		if(s[strlen(s)-1]=='\n')
			s[strlen(s)-1]='\0';
		LongestHw(s);
	}
}
