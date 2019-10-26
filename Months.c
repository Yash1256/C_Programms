#include<stdio.h>
int main()
{
	int a;
	printf("Input the number of Days    : ");
	scanf("%d",&a);
	printf("The number of Months are    : %d\n",a/30);
	printf("The number of left Days are : %d",a%30);
	return 0;
}