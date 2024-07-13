#include<stdio.h>
main()
{
	int x,y;

	
	printf("x=");
	scanf("%d",&x);
	
	printf("y=");
	scanf("%d",&y);
	

	x = x + y; 
    y = x - y; 
    x = x - y; 
	printf("x=%d",x);
	printf("y=%d",y);
}
