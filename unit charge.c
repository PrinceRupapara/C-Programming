#include<stdio.h>
int main()
{
	int unit,Rs,total,price,totalprice,tax;
	printf("enter the unit");
	scanf("%d",&unit);
	if(unit<=50)
	{
		Rs=unit*50;
	}
	else if(unit<=150)
	{
		Rs=50*0.50+(unit-50)*0.75;
	}
	else if(unit<=250)
	{
		Rs=50*0.50+100*0.75+(unit-150)*1.20;
	}
	else 
	{
		Rs=50*0.50+100*0.75+100*1.20+(unit-250)*1.50;
	}
	tax=price*0.20;
	totalprice=price+tax;
	printf("for unit%d price:%d%f",unit,totalprice);
	return 0;
}
