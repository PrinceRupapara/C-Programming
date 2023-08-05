#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<=4;i++)
	{
		k=i%2;
		for(j=0;j<i;j++)
		{
			printf("%d ",k);
			k=!k;
		}
		printf("\n");
	}
	return 0;
}
