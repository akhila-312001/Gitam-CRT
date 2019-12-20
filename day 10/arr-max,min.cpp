#include<stdio.h>
int main()
{
	int a[100],i,n,r,large,small;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		large=small=a[0];
		if(large<a[i])
		{
			large=a[i];
		}
		if(small>a[i])
		{
			small=a[i];
		}
		
	}
	printf("<%d,%d>",large,small);
	return 0;
}
