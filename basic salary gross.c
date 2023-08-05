#include<stdio.h>
int main()
{
	int basic_salary,HRA,DA;
	printf("Enter a basic_salary");
	scanf("%d",&basic_salary);
	if(basic_salary>=30000)
	{
		HRA=basic_salary*0.3;
		DA=baisc_salary*0.9;
	}
	else if(basic_salary>=20000)
	{
		HRA=basic_salary*0.25;
		DA=basic_salary*0.9;
	}
	else if (basic_salary>=10000)
	{
		HRA=basic_salary*0.2;
		DA=basic_salary*0.8;
	}
	printf("gross_salary=basic_salary+HRA+DA")
	printf("%d",gross_salary);
	return 0;
}
