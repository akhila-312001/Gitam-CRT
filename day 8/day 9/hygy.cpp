#include<stdio.h>
int main()
{
	long x;
	int r,cnt=0,large=0;
	scanf("%ld",&x);
	while(cnt!=3)
	{
		r=x%10;
		if(r>large)
		{
			large=r;
		}
		x=x/10;
		cnt++;
	}
	printf("%d",large);
	return 0;
}
