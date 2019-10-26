#include<stdio.h>
int main()
{
	int a,b;
	printf("Input 1st Integer :: ");
	scanf("%d",&a);
	printf("Input 2nd Integer :: ");
	scanf("%d",&b);
	printf("The bitwise NOR (a^b) is :: %d ",a^b);
	return 0;
}