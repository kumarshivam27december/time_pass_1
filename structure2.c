#include <stdio.h>
struct student
{
	char roll[10];
	char name[20];
	char branch[10];
	float fees;
	
};
void main()
{
	struct student s1 = {"111","shiva","cse",10000};
	struct student s2 = {"112","shiv","cs",1000};
printf("\n roll number = %s",s1.roll);
printf("\n name = %s",s1.name);
printf("\n branch = %s",s1.branch);
printf("\n roll number = %.2f",s1.fees);



	}
	

