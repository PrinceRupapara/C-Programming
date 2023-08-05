#include<stdio.h>
int main (){
	int i,j,n=3,a[3][3],sum=0;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("enter elements %d %d ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if (i==j)
			{
				printf("%d",a[i][j]);
					sum=sum+a[i][j];
			}
		
		}
	}
	
		
		printf("\n\n%d",sum);
	
	

	return 0;
}
