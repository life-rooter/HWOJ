/*************************************************************************
	> File Name: HW58_StringCrypt.cpp
	> Author: xh
	> Mail: banre123@126.com 
	> Created Time: Sun 30 Aug 2015 10:30:58 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
void funencrypt(char *key,char *data,char *encrypt)
{
	char *p=key,*q=data;
	char b1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b2[27];
	int i=0,j,len;
	while(*p!='\0')
	{
		if(*p>='a'&&*p<='z')
			*p=*p-32;
		++p;
	}
	p=key;
	while(*p!='\0')
	{
		int flag=0;
		for(int j=0;j<=i;++j)
			if(*p==b2[j])
			{
				flag=1;
				break;
			}
		if(flag==0)
			b2[i++]=*p;
		++p;
	}
	len=i;
	for(int i=0;i<26;i++)
	{
	    int flag=1;
	    for(j=0;j<len;j++)
		if(b1[i]==b2[j])
		{
			flag=0;
			break;
		}
		if(flag!=0)
		b2[len++]=b1[i];
	}
/*	for(int i=0;i<26;i++)
		b2[b2[i]-'A']=i;
*/	i=0;
	while(*q !='\0')	
	{
		if(*q!=' ')
		{
			if(*q>='A'&&*q<='Z')
			encrypt[i++]=b2[*q-'A'];
			else if(*q>='a'&&*q<='z')
			encrypt[i++]=b2[*q-'a']+32;
		}
		else
			encrypt[i++]=*q;
		++q;
	}
	encrypt[i]='\0';
	cout<<encrypt<<endl;

}
int main()
{
char key[20],data[30],encrypt[30];
//cin.getline(key);
//cin.getline(data);
gets(key);
gets(data);
funencrypt(key,data,encrypt);
//system("pause");
}
