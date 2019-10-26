#include<stdio.h>
int main()
{
	float a,b;
	printf("Input The Distance Travelled by the Car : ");
	scanf("%f",&a);
	printf("Input The Fuel Consumed by the Car      : ");
	scanf("%f",&b);
	printf("The Mileage of The Car is               : %f",a/b);
	return 0;
}