#include<stdio.h>
#include<string.h>
int add(char*a,char *b)
{
	//int i=0,j=0,k=0;
	int lena=strlen(a);
	int lenb=strlen(b);
	if(lena==0||lenb==0)
		return 0;
	int i=lena-1,j=lenb-1,k,l;
	if(lena>lenb)l=k=lena;
	else l=k=lenb;
	int flag=0;
	char c[101];
	while(i>=0&&j>=0)
	{
		c[k--]=(a[i]-'0'+b[j]-'0'+flag)%10+'0';// must add '0',conver to char
		flag=(a[i]-'0'+b[j]-'0'+flag)/10;
		i--;j--;
	}

	if(i>=0)
	{
		c[k--]=(a[i]-'0'+flag)%10+'0';
		flag=(a[i]-'0'+flag)/10;
		i--;
	}
	if(j>=0)	
	{
		c[k--]=(b[j]-'0'+flag)%10+'0';
		flag=(b[j]-'0'+flag)/10;
		j--;
	}

	//	c[k]='\0';
	if(flag==0)
	{
		
		c[0]='0';
	}
	else
	{
		c[0]=flag+'0';
	}

	for(i=0;i<=l;i++)
	{
		if(i==0&&c[0]=='0')
			continue;
		else
			printf("%c",c[i]);
	}
	printf("\n");
	return 0;
}
int main()
{
	char a[100],b[100];
	while(scanf("%s %s",a,b)!=EOF)
		//printf("%s\n",add(a,b));
		add(a,b);
}
