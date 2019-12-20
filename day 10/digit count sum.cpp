#include<stdio.h>
#include<math.h>
int isDigitCount(int a) 
{
	int n=0;
	while(a!=0)
	{
		n++;
		a/=10;
	}
	return n;
}
int main()
{
	int x,r,count,sum=0;
	scanf("%d",&x);
	count=;
	while(x!=0)
	{
		r=x%10;
		sum=sum+pow(r,isDigitCount(x));
		x/=10;
	}
	printf("%d",sum);
	return 0;
}
