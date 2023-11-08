#include<stdio.h>

void main()
{
	int a,b,c;
	printf("value of A =");
	scanf("%d",&a);
	printf("value of B =");
	scanf("%d",&b);
	c=a+b;
	printf("sum of A+B = %d\n",c);

	c = a;
	a = b;
	b = c;
	
	printf("swapping value of A = %d\n",a);
	printf("swapping value of B = %d\n",b);
}