#include<stdio.h>
#include<string.h>

int count(char *s)
{
	int i,cnt=0,digcnt=0,acnt=0,numcnt=0,Acnt=0,otcnt=0;
	int len=strlen(s);
	if(len<=4)cnt+=5;
	else if(len>=5&&len<=7)cnt+=10;
	else if(len>=8) cnt+=25;
	for(i=0;i<len;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			acnt++;
		else if(s[i]>='A'&&s[i]<='Z')
			Acnt++;
		else if(s[i]>='0'&&s[i]<='9')
			numcnt++;
		else if((s[i]>=0x21&&s[i]<=0x2F)||(s[i]>=0x3A&&s[i]<=0x40)||(s[i]>=0x5B&&s[i]<=0x60)||(s[i]>=0x7B&&s[i]<=0x7E))
			otcnt++;
	}
	int flag1=0,flag2=0,flag3=0,flag4=0;
	if((acnt&&!Acnt)||(!acnt&&Acnt))
	{cnt+=10;flag1=1;}
	if(acnt&&Acnt)
	{cnt+=20;flag2=1;}
	if(numcnt==1)
	{cnt+=10;flag3=1;}
	if(numcnt>1)
	{cnt+=20;flag3=1;}
	if(otcnt==1)
	{cnt+=10;flag4=1;}
	if(otcnt>1)
	{cnt+=25;flag4=1;}
	if(flag1&&flag2)
		cnt+=2;
	if(flag1&&flag3&&flag4)
		cnt+=3;
	if(flag2&&flag3&&flag4)
		cnt+=5;
	return cnt;
}
void prlevel(int i)
{
	if(i>=90) printf("VERY_SECURE\n");
	else if(i>=80) printf("SECURE\n");
	else if(i>=70) printf("VERY_STRONG\n");
	else if(i>=60) printf("STRONG\n");
	else if(i>=50) printf("AVERAGE\n");
	else if(i>=25) printf("WEAK\n");
	else if(i>=0)  printf("VERY_WEAK\n");

}

int main()
{
	char s[20];
	//gets(s);
	fgets(s,20,stdin);//żÉÄÜľÄ˝áÎ˛ĘÇ'\n' ,'\0';
	prlevel(count(s));
	getchar();
}
