#include<stdio.h>
main()
{
	int gs,bs,hra,da,ta;
	
	printf("enter the basic salary:=");
	scanf("%d",&bs);
	
	hra=(8*bs)/100;
	da=(10*bs)/100;
	ta=(12*bs)/100;
	
	gs=bs+hra+da+ta;
	
	printf("yora ans is %d",gs);
	
}
