#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three value");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c&&c==a)
	{
		printf("triangle is equlateral");
	}
	else if(a==b||b==c||c==a)
	{
		printf("triangle is isoceles");
	}
	else
	{
		printf("triangle is scalence");
	}
		return 0;
			
}
