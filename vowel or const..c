#include<stdio.h>
int main()
{
	char ch,uppercase,lowercase;
	printf("enter a character");
	scanf("%c",&ch);
	uppercase=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	lowercase=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	if(uppercase||lowercase)
	{
		printf("vowel");
	}
	else
	{
		printf("constant");
	}
	return 0;
}
