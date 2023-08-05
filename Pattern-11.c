#include<stdio.h>
int main()
{
	int i,j,k,n=5;
	char al='A',input='E';
	for(i=1;i<=(input-'A'+1);i++)
	{
		for(k=1;k<=i;k++)
		{
			if(n%2==0)
			{
				printf("%d",j);	
			}
			else
			{
					printf(" %d",k);	
			}
		
		}	
		printf("\n");	
		for(j=0;j<=i;j++)
		{
		printf(" %c",al);
		al++;	
		}
		
		printf("\n");	
	}	
	return 0;
}
