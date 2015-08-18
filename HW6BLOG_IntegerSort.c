#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 int StringSplit2Int(char *s,int a[])
{
	char *p=s;
	int i=0,num=0;
	while(*p!='\0')
	{
		num=0;
		while(*p!=','&&*p!='\0')
		{
			num=num*10+*p-'0';
			++p;
		}
		++p;
		a[i++]=num;
	}
	return i;
}
 int DeleteContinu(int a[],int n)
 {	
	 int cnt=0,i=0,j=0,t;
	 for(i=0;i<n;)
	 {
		 t=i;a[j]=a[i];cnt=0;
		 while(t<n-1&&a[t+1]==a[t]+1)
		 {
			 ++t;++cnt;
		 }
		/* if(cnt>0&&t!=n-1)
		 {
		 a[++j]=a[i+cnt];
		 }
		 else if(cnt>0&&t==n-1)
		 {
		 a[++j]=a[t];
		 }
		 */
		 if(cnt>0)
			 a[++j]=a[t];
		 i=t+1;++j;
	 }
	 return j;

 }
 int comp(const void *x,const void *y)
 {
	 return *(int *)x-*(int *)y;
 }
 int main()
 {
	 char a[101];
	 int b[101];
	 int i,cnt;
	 fgets(a,100,stdin);
	 if(a[strlen(a)-1]=='\n')
		 a[strlen(a)-1]='\0';
	 cnt=StringSplit2Int(a,b);
	 qsort(b,cnt,sizeof(int),comp);
	 cnt=DeleteContinu(b,cnt);
	 for(i=0;i<cnt;i++)
		 printf("%d ",b[i]);
	 printf("\n");
	 getchar();
 }