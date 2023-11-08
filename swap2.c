#include<stdio.h>

void main()
{
	int a,b;
	
	printf("value of A = ");
	scanf("%d",&a);
	printf("value of B =");
	scanf("%d",&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
 
 	printf("swapping value of A = %d\n",a);
	printf("swapping value of B = %d",b);
		
}