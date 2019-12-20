#include<stdio.h>
int main()
{
	long x;
	int large=0,r,least=9;
	scanf("%ld",&x);
	while(x!=0)
	{
		r=x%10;
		if(r>large)
		{
			large=r;
		}
		if(r<least)
		{
			least=r;
		}
		x=x/10;
	}
	printf("< %d,%d>",least,large);
	return 0;
}
