#include<stdio.h>
int main()
{
	int a,b;
	a=10;
	b=0;
	printf("\n a=%d b=%d",a,b);
	b=a;
	printf("\n a=%d b=%d",a,b);
	b=++a;
	printf("\n a=%d b=%d",a,b);
	b=--a;
	printf("\n a=%d b=%d",a,b);
	b=a++;
	printf("\n a=%d b=%d",a,b);
	b=a--;
	printf("\n a=%d b=%d",a,b);
	return 0;
}
