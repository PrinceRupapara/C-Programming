#include<stdio.h>
int main(){
	int a=1;
	float b=4;
	char c='A';
	double d= 6 ;
	
	int *p;
	float *i;
	char *x;
	double *h;
	
	p=&a;
	i=&b;
	x=&c;
	h=&d;
	
	printf("\nvalue of a:%d ",a);
	printf("\n adrresh of a: %d ",p);
	printf("\n value of b: %f ",b);
	printf("\n adrresh of b: %f ",i);
	printf("\n value of c: %c ",c);
	printf("\n adrresh of c: %c ",x);
	printf("\n value of d: %lf ",d);
	printf("\n adrresh of d: %lf ",h);
	
	return 0;
}
