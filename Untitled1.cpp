#include<stdio.h>
main()
{
	int gs,bs,hr,dt,ta;
	
	printf("enter the salary");
	scanf("%d",&bs);
	
	hr=(8*bs)/100;
	dt=(10*bs)/100;
	ta=(12*bs)/100;
	
	gs=hr+bs+dt+ta;
	printf("%d",gs);
}
