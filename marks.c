#include<stdio.h>
main()
{
	int hindi,eng,guj,maths,Total;
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
}

