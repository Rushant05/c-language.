//area of triangle
#include<stdio.h>
main()
{
	int b,h;
	float ans;
	
	printf("enter the base:=");
	scanf("%d",&b);
	
	printf("enter the height:=");
	scanf("%d",&h);
	
	ans=(b*h)/2;
	
	printf("area of triangle is:%f",ans);
}
