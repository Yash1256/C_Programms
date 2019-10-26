#include<stdio.h>
int main()
{
	int a;
	printf("Input the number of Days : ");
	scanf("%d",&a);
	printf("The number of years are  : %d\n",a/365);
	a=a%365;
	printf("The number of Months are : %d\n",a/30);
	printf("The number of Days are   : %d",a%30);
	return 0;
}