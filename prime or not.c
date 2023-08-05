#include<stdio.h>
int main()
{
	int num,i=1,a=0;
	printf("Enter Number: ");
	scanf("%d",&num);
	while(i<=num)
	{
		if(num%i==0)
		a++;
		i++;
	}
	if(a==2)
		printf("\n %d is prime Number",num);
	else
		printf("\n %d is not prime Number",num);
		return 0;
}
