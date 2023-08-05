#include<stdio.h>
int main()
{
	int n,digit;
	printf("Enter Number:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		printf("\n digit=%d",digit);
		n=n/10;
	}
	return 0;
}
