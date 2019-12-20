#include<stdio.h>

int reverse(int a)
{
	int rev=0;
	while(a!=0)
	{
	rev=rev*10+(a%10);
	a=a/10;
}
	return rev;
}
int isPrime(int x)
{
	int start,flag=0;
	for(start=2;start<=(x/2);start++)
	{
		if(x%start==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int r,rev=0;
	long x,temp;
	scanf("%ld",&x);
	temp=reverse(x);
	if(isPrime(x) && isPrime(temp))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
