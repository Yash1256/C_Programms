#include<stdio.h>
int main()
{
	float a,b;
	printf("Input the Temperature in Celcius          :: ");
	scanf("%f",&a);
	b=((float)9/5)*a+32;
	printf("The Required Temperature in Fahrenheit is :: %f",b);
	return 0;
}