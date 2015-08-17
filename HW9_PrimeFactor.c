#include<stdio.h>
#include<math.h>
#include<string.h>

int PrimeInN(long int n,int *a)
{
	if(n==1)
		return -1;
	int i=0,j;
	a[0]=2;
	int flag,k=0;// k indicates current id of primes in array a
	for(j=3;j<n;j++)
	{
		flag=1;
		for(i=0;i<=k&&flag==1;i++)
			if(j%a[i]==0)
				flag=0;
		if(flag==1)
		{
			a[++k]=j;
		}
	}
	return k+1;
}
void PrimeFactorInN(long int n)
{	
	
	int a[1000], b[1000],i,j,k=0;
	if(n==2)
	{
		printf("input is a prime\n");
		return ;
	}
	memset(b,0,sizeof(int )*1000);
	j=PrimeInN(n/2+1,a);
	for(i=0;i<j;i++)
		while(n%a[i]==0)
		{
			n/=a[i];
			b[a[i]]++;
		}
	for (i=0;i<1000;i++)
		while(b[i]--)
		{
		k++;
		printf("%d ",i);
		}
	if(k==0)
		printf("input is a prime\n");

}
void PrimeFactorInN2(long int n)
{
	int b=2;
	long int a=n;
	for(b=2;b<sqrt((float)a);){
		if(n%b==0)
		{
			printf("%d ",b);
			n/=b;
			continue;
		}
		b++;
	}
}
int main()
{

	long int n;
	//int a[1000];
	while(scanf("%ld",&n)!=EOF)
	{
	PrimeFactorInN(n);
	PrimeFactorInN2(n);
	}
}
