#include<stdio.h>
#include<string.h>

void reverse(char* s)
{

	char *p=s,*q=s;
	while(*++p!='\0');
	p--;//p point to the char before '\0'
	while(q<p)
	{
		char temp;
		temp=*q;
		*q=*p;
		*p=temp;
		p--;q++;
	}
}
void ExtractInt(char *s)
{
	char b[20];
	char c[20];
	int i=0;
	//memset(b,0,10);
	reverse(s);//s reverse
	memset(b,0,sizeof(char)*20);
/*	while(*s)//本版本bug,改变s的位置，在循环里s递增了
	{
		if(b[*s-'0']==0)//该数字尚未出现过
		{
			b[*s-'0']=1;//该数字已经出现
		  if(*s=='0'&&i==0);//从右边读第一个是零，则跳过，继续读下一个
		  else
		  {
			c[i]=*s;
			i++;
		  }
		}
		s++;
	}
	int j=i-1;
	for(;j>=0;j--)
		s[j]=c[j];
	s[i]='\0';
*/
	char *p=s; // use p to replace s,otherwise thr return of will change
	while(*p)// when use s ,change the point
	{
		if(b[*p-'0']==0)//该数字尚未出现过
		{
			b[*p-'0']=1;//该数字已经出现
		  if(*p=='0'&&i==0);//从右边读第一个是零，则跳过，继续读下一个
		  else
		  {
			s[i]=*p;
			i++;
		  }
		}
		p++;
	}
	s[i]='\0';
}

int main()
{
	char str[52];
	char *p;
//gets(str);
while(scanf("%s",str)!=EOF)
{
	ExtractInt(str);
	printf("%s\n",str);
}

}
