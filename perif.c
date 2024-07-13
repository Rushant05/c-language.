#include<stdio.h>
main()
{
	int hindi,eng,guj,maths,Total,grade;
	float per;
	
	printf("Enter The Hindi Marks:=");
	scanf("%d",&hindi);
	
	printf("Enter The English marks:=");
	scanf("%d",&eng);
	
	printf("Enter The gujrati marks:=");
	scanf("%d",&guj);
	
	printf("Enter The maths marks:=");
	scanf("%d",&maths);
	
	Total=hindi+eng+guj+maths;
	
	per=Total/4;
	
	printf("\nTotal of 4 subjects is:=%d\n",Total);
	printf("per of 4 Subjects:=%f", per);
	
	if(per>90&&per<100){
		printf("Grade is A");
	}
	if(per>80&&per<90){
		printf(" Grade is B");
	}
	if(per>70&&per<80){
		printf(" Grade is c");
	}
	if(per>60&&per<70){
		printf(" Grade is D");
	}
	if(per<50){
		printf("You are failed\n");
	}
		
	


}
