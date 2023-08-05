#include<stdio.h>
int main(){
	int i,j,a[3][3],b[3][3],c[3][3],n=3;	
	printf("___ enter first matrix :\n ");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" enter elements of %d %d :",i,j);
			scanf("%d",&a[i][j]);
		}
	}		
	printf("__ second matrix :\n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" enter elements of %d %d :",i,j);
			scanf("%d",&b[i][j]);
		}
	}		
	printf(" answer matrix :\n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
