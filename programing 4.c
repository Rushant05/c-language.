//variable,data types
#include<stdio.h>
main()
{
	int hindi=90;
	int english=89;
	int gujrati=90;
	int maths=95;
	int science=85;
	int total;
	float per;
	
	total=hindi+english+gujrati+maths+science;
	
	per=total/5;
	
	printf("hindi marks is:=%d\n",hindi);
	printf("english marks is:=%d\n",english);
	printf("gujrati marks is:=%d\n",gujrati);
	printf("maths marks is:=%d\n",maths);
	printf("science marks is:=%d\n\n",science);
	
	printf("total of 5 subjects:=%d\n",total);
	printf("per of 5 subjects:=%f\n",per);
}
