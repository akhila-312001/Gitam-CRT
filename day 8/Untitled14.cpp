#include<stdio.h>
int main()
{
	int r,a;
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		a=a/10;
		printf("%d",r);
	}
	return 0;
}
