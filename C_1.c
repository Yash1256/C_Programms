#include<stdio.h>
int main()
{
	float a,b;
	printf("Input the Temperature in Fahrenheit    :: ");
	scanf("%f",&a);
	b=((float)5/9)*(a-32);
	printf("The Required Temperature in Celcius is :: %f",b);
	return 0;
}