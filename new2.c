#include<stdio.h>
void main()
{
	float s1,s2,s3,s4,s5,sum,marks ;
	printf("enter the marks of student : ");
	
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	
	marks=((s1+s2+s3+s4+s5)/500)*100;
	printf("\n marks=%f",marks);
	if (marks<=40)
		printf("\n failed ");
	else if (marks<=60)
		printf("\n second class");
	else if (marks<=70)
		printf("\n first class ");
	else if (marks>70)
		printf("\n distinction");
}
