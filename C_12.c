#include<stdio.h>
int main()
{
	float x=20,y=10,z=15,k=5,out;
	printf("The value of x=%d,y=%d,z=%d ",x,y,z);
	out=x+y*z/k;
	x=y++ * x+2/3.0/2;
	y=++y + x*2 +4;
	z=y-- + x/2;
	k=++z * x + y * z/2;
	printf("\nThe value of x=%d,y=%d,z=%d ",x,y,z);
	return 0;
}