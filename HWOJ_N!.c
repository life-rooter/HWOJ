#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char s[1000]={0};


void CalcNN(int n, char *pOut)
{
	
	if(n < 0 || n > 100 || pOut == NULL)
		return;

	if(n == 0 )
	{
		pOut[0] = '1';
		pOut[1] = '\0';
		return;
	}
	int i,j,k,a;
	memset(s,0,1000);
	s[0]='1';
	int len;
	char p[1000];
	for(i=1;i<=n;++i)
	{
		    k=i%10;
			memset(p,'0',1000*sizeof(char));
			a=0;
			for(j=0;j<strlen(s);++j)
			{
				p[j]=(k*(s[j]-'0')+a)%10+'0';
				a=(k*(s[j]-'0')+a)/10;
			}
			if(a>0)
			{
				p[j]=a+'0';
			    p[j+1]='\0';
			}
			else
				p[j]='\0';
			if((k=i/10,k)!=0)
			{
				p[strlen(p)]='0';// 不重置最后一个的话，
			    a=0;
			    for(j=0;j<strlen(s);++j)
			    { 
				len=(k*(s[j]-'0')+a+p[j+1]-'0');
				  p[j+1]=len%10+'0';//此循环p[j+1]-'0'会出问题
				  //a=(k*(s[j+1]-'0')+a+p[j+1]-'0')/10;//p[j+1]已更新，会出bug
				  a=len/10;
			    }
			    if(a>0)
			   {
				  p[j+1]=a+'0';
			      p[j+2]='\0';
			    }
			    else
				  p[j+1]='\0';
			}
			memset(s,0,1000);
			strcpy(s,p);//更新
	}
	k=len=strlen(s);
	for(i=0;i<len;++i)
		pOut[i]=s[--k];
	pOut[i]='\0';
	return;
}
void CalcNN2(int n, char *pOut)
{
	
	if(n < 0 || n > 100 || pOut == NULL)
		return;
	if(n == 0||n==1 )
	{
		pOut[0] = '1';
		pOut[1] = '\0';
		return;
	}
	int i,j,temp,c1,len=0;
	pOut[len++]='1';
	for(i=2;i<=n;++i)
	{   

		c1=0;
		for(int j = 0;j <len;++j){
            temp = (pOut[j] - '0') * i + c1;
            pOut[j] = temp % 10 + '0';
            c1 = temp / 10;
        }        
        while(c1){
            pOut[len++] = c1 % 10 + '0';
            c1/= 10;
        }
    }
    pOut[len] = '\0';
   
    for(int i = 0,j = len-1;i < j;++i,--j){
		temp=pOut[i];
		pOut[i]=pOut[j];
		pOut[j]=temp;
       }//for

		}


int main()
{
	int n;
	int i;
	char *pout=(char *)malloc(sizeof(char)*1000);
	char *pout1=(char *)malloc(sizeof(char)*1000);
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{

    CalcNN( i, pout);
	CalcNN2(i,pout1);
	if(strcmp(pout,pout1)==0)
		continue;
	else
		printf("%d\n",i);
	}
		/*while(scanf("%d",&n))
	{
	CalcNN(n, pout);
	CalcNN2(n,pout1);
	printf("%s\n",pout);
	printf("%s\n",pout1);
	}
	*/
	printf("OK");

	getchar();
	getchar();


}
