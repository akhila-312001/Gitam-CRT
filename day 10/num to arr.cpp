#include<stdio.h>
int main()
{
	int x,a[100],n=0,i;
	scanf("%d",&x);
	while(x!=0)
	{
		a[n]=x%10;
		x/=10;
		n++;
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
