//scanf (user input)
#include<stdio.h>
main()
{
	int no1,no2,sum,minus,mul,div,mod;
	 
	printf("Enter The no1:=");
	scanf("%d",&no1);
	
	printf("Enter The no2:=");
	scanf("%d",&no2);
	
	sum=no1+no2;
	minus=no1-no2;
	mul=no1*no2;
	div=no1/no2;
	mod=no1%no2;
	
	printf("addition is :=%d\n",sum);
	printf("minus is :=%d\n",minus);
	printf("multi is :=%d\n",mul);
	printf("dividuon is :=%d\n",div);
	printf("module is :=%d",mod);
}
