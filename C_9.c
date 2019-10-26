#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Input the first number  :: ");
	scanf("%d",&a);
	printf("Input the second number :: ");
	scanf("%d",&b);
	printf("Input the third number  :: ");
	scanf("%d",&c);
	c= a/b * c/5 %a++ * 2-b++ * 3;
	printf("After operation values are a=%d,b=%d,c=%d\n",a,b,c);
	if((a>b)&&(a>c))
	{
		printf("The greatest Number is :: %d",a);
		if(b>c)
			printf("\nThe smallest Number is :: %d",c);
		else
			printf("\nThe smallest Number is :: %d",b);
	}
	else if((b>c)&&(b>a))
	{
		printf("The greatest Number is :: %d",b);
		if(c>a)
			printf("\nThe smallest Number is :: %d",a);
		else
			printf("\nThe smallest Number is :: %d",c);
	}
	else
	{
		printf("The greatest Number is :: %d",c);
		if(b>a)
			printf("\nThe smallest Number is :: %d",a);
		else 
			printf("\nThe smallest Number is :: %d",b);
	}
	return 0;
}