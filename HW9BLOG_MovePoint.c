#include<stdio.h>
#include<string.h>
struct point {
	int x;
	int y;
};
struct point *MovePoint(char *s,struct point *p)
{
	char *s1=s,*s2=strchr(s,';'),*temp=s;
	int num=0,flag=0;
	while(*s2!='\0')
	{	
		if(s1[0]=='A'||s1[0]=='D'||s1[0]=='S'||s1[0]=='W')
		{
			temp=s1;flag=0;num=0;//Remember reset flag in the new loop;
			while(s1++<s2-1)
			{
				if(*s1>='0'&&*s1<='9')
					num=num*10+*s1-'0';
				else 
				{flag=1;break;}
			}
			if(!flag) {
			if(*temp=='A')p->x-=num;
			else if(*temp=='D')p->x+=num;
			else if(*temp=='S')p->y-=num;
			else if(*temp=='W')p->y+=num;
			}
		}
		//else
		s1=s2+1;
		if(*s1=='\0')break;
		s2=strchr(s1,';');

	}
	return p;
}
int main()
{
	char s[100];
	struct point point={0,0};
	struct point *p;
	while(fgets(s,100,stdin)!=NULL)
	{
		if(s[strlen(s)-1]=='\n')
			s[strlen(s)-1]='\0';
		p=MovePoint(s,&point);
		printf("%d,%d\n",p->x,p->y);

	}
}