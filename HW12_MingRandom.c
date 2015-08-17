#include<stdio.h>
#include<string.h>
/**
 *
 * 构造以输入值为标记的hash表，天然已排序就位
 */
int RemoveDuplicat(int a[],int n)
{
	int b[1000];
	int i;
	memset(b,0,sizeof(int)*1000);
	for(i=0;i<n;i++)
	{
		b[a[i]]=1;
	}
	for(i=0;i<1000;i++)
		if(b[i])printf("%d\n",i);
}

/* Sort(int a[],int n)
{

}
*/	
int main()
{
	int a[1000];
	int n;
	int i;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		RemoveDuplicat(a,n);
	}
}
