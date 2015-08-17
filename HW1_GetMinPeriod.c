#include<stdio.h>
#include<string.h>
int GetMinPeriod(char *inputstring)
{
	if(inputstring==NULL)
	{
		return -1;
	}
	int len=strlen(inputstring);
	char *p=inputstring;
	int isfound=0;
	int i,k;
	for(i=0;i<len/2;i++)
	{
		//isfound=0;
		for(k=i+1;k<len;k++)
		{
			if(p[k]==p[k%(i+1)])
				isfound=1;
			else
			{
				isfound=0;
				break;
			}
		}
		if(isfound)
			return (i+1);
	}
   return len;// not found ,return the length of string	
}

int GetMinPeriod2(char *inputstring)//less calcuate because of len%period==0
{
	if(inputstring==NULL)
	{
		return -1;
	}
	int len=strlen(inputstring);
	char *p=inputstring;
	int isfound=0;
	int i,j;
	for(i=1;i<=len/2+1;i++)
	{
		if(len%i==0)
		{
			isfound=1;
			for(j=i;j<len;j++)
				if(p[j-i]!=p[j])
				{
					isfound=0;
					break;
				}

			if(isfound)
				return i;
		}
	}
	return len;

}

int GetMinPeriod3(char *inputstring)//zxccxz is 5 ,have something bug
{
    if(!inputstring||inputstring[0]=='\0')
		return 0;

   int length=(int )strlen(inputstring),reg,count,i,j;

   for(i=1;i<=length/2;i++)//remove bug length-->length/2
   {
	   count=0;
	   for(j=i;j<length;j++)
		if(inputstring[j]==inputstring[j%i])
		{
		  count++;
		}
		else break;

		if((count+i)==length)
		{
		  reg=i;return reg;
	//	break;
		}
   }
    //return reg;
	return length;
}
void main()
{
	char *p;
	while(scanf("%s",p)!=EOF)
		printf("min period is %d,%d,%d\n",GetMinPeriod(p),GetMinPeriod2(p),GetMinPeriod3(p));
}
