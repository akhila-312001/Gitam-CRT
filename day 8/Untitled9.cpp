#include<stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if( x>=65 && x<=90) {
	printf("uppercase");
	}
	else if(x>=97 && x<=122)
	{
		printf("lowercase");
	}
	else if(x>=48 && x<=57)
	{
		printf("digit");
	}
	return 0;
}
