#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,root1,root2,real,delta,img;
	printf("Enter three value");
	scanf("%d%d%d",&a,&b,&c);
	delta=b*b-4*a*c;
	printf("%d",delta);
	if(delta>0)
	{
		
		root1=-b+sqrt(delta)/2*a;
		root2=-b+sqrt(delta)/2*a;
	}
	else if(delta==0)
	{
		root1=root2=-b/2*a;
	}
	else // if(delta<0)
	{
		real=-b/2*a;
		img=sqrt(delta)/2*a;
		printf("root1=%d+i*%d",real,img);
		printf("root2+%d=-i%d",real,img);
	}
	return 0;			
}
