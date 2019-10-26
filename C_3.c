#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Input the first number  :: ");
	scanf("%d",&x);
	printf("Input the second number :: ");
	scanf("%d",&y);
	printf("Input the third number  :: ");
	scanf("%d",&z);
	z=x + y + z/4 % ++x *2 - 1;
	printf("After operation values are x=%d,y=%d,z=%d\n",x,y,z);
	if((x>y)&&(x>z))
	{
		printf("The greatest Number is :: %d",x);
		if(y>z)
			printf("\nThe smallest Number is :: %d",z);
		else
			printf("\nThe smallest Number is :: %d",y);
	}
	else if((y>z)&&(y>x))
	{
		printf("The greatest Number is :: %d",y);
		if(z>x)
			printf("\nThe smallest Number is :: %d",x);
		else
			printf("\nThe smallest Number is :: %d",z);
	}
	else
	{
		printf("The greatest Number is :: %d",z);
		if(y>x)
			printf("\nThe smallest Number is :: %d",x);
		else 
			printf("\nThe smallest Number is :: %d",y);
	}
	return 0;
}