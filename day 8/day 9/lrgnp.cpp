#include<stdio.h>
int main()
{
	int i,large,r;
	long x;
	large=0;
	scanf("%ld",&x);
	while(x!=0)
	{
		r=x%10;
		if(r>large)
		{
		 large=r;
		}
		x=x/10;
	}
	printf("the largest number is: %d",large);
	return 0;
}
