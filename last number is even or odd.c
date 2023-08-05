#include<stdio.h>
int main()
{
	int number,digit;
	printf("Enter a number");
	scanf("%d",&number);
	digit=number/10;
	if(digit%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
