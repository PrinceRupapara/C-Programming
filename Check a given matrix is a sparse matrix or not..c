#include<stdio.h>
int main (){
	int i,j,n=3,a[3][3],count=0;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("enter elements %d %d ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if (a[i][j]==0)
			{
				count++;	
			}
		
		}
	}
	
		if(count>(n*n)/2){
			printf(" this is  sparse matrix");
		}
		else{
			printf(" this is not  sparse matrix");
		}
	
	
	

	return 0;
}
