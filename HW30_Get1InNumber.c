#include<stdio.h>
int GetNumber(unsigned int i)
{
	int max=0;
	int cnt=0;
	while(i)
	{
		
		if(i&0x01)
		cnt++;
		else
			if(cnt>max) {max=cnt;cnt=0;}
		i=i>>1;//最后一次i变为0时，max还未更新就跳出循环了
	}
	if(cnt>max)return cnt;//弥补最后一次未更新的max值
	return max;
}

int main()
{
	unsigned int i;
	while(scanf("%d",&i)!=EOF)
	printf("%d\n",GetNumber(i));
}
