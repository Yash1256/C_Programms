#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Input the value of x : ");
	scanf("%d",&a);
	printf("Input the value of y : ");
	scanf("%d",&b);
	printf("Input the value of z : ");
	scanf("%d",&c);
	if(c>5)
	{
		a=b++ + 1;
		b=a++ * 2;
		c=++b;
	}
	else
	{
		c=++b + 1 + ++a;
	}
	printf("The value of x is   :: %d , y is :: %d , z is :: %d ",x,y,z);
	return 0;
}