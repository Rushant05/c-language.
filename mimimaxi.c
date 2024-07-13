#include<stdio.h>
main()
{
	int a;
	printf("enter the value");
	scanf("%d",&a);
	
	int b;
	printf("enter the value");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf(" the minimum value is a");
	}
	
	if(b<a)
	{
		printf(" the minimum value is b ");
	}
}
