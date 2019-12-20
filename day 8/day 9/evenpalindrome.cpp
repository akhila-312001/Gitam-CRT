#include<stdio.h>
int isPalindrome(int x)
{
	int rev=0,temp;
	while(x!=0)
	{
		rev=rev*10+(x%10);
		x=x/10;
		if(rev==temp)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int x1,x2,i,a,cnt=0;
	scanf("%d%d",&x1,&x2);
	for(i=x1;i<=x2;i++)
	{
		if(i%2==0)
		{
			a=isPalindrome(i);
			if(a==1)
			{
				cnt++;
			}
		}
	}
	printf("%d",cnt);
	return 0;
	}
