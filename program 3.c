//variable,data types
#include<stdio.h>
main()
{
	int no1;
	int no2;
	printf("enter the value of=");
	scanf("%d",&no1);
	printf("enter the value of=");
	scanf("%d",&no2);
	int sum ; 
	int minus;
	int mul ;
	int div ;
	int mod;
	
	sum=no1+no2;
	minus=no1-no2;
	mul=no1*no2;
	div=no1/no2;
	mod=no1%no2;
	
	printf("addition is:=%d\n",sum);
	printf("minus is:=%d\n",minus);
	printf("multi is :=%d\n",mul);
	printf("dividuon is:=%d\n",div);
	printf("mdule is :=%d",mod);
	
				
}
