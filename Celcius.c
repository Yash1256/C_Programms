#include<stdio.h>
int main()
{
	float a;
	printf("Input The Temperature in Fahrenheit : ");
	scanf("%f",&a);
	printf("The Temperature in Celsius is       : %f",(a-32)/1.8);
	return 0;
}