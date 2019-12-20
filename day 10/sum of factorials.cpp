#include<stdio.h>
int isFactorial(int x)
{
	int i,fact=1;
	for(i=x;i>0;i--)
	{
		fact=fact*i;
	}
	return fact;
}
int main()	
{
	int x,r,buffer,a,sum=0;
	scanf("%d",&x);
	buffer=x;
	while(x!=0)
	{
		r=x%10;
		sum=sum+isFactorial(r);
		x=x/10;
	}
	if(buffer==sum)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
}
