#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;
	printf("Input the Coeffecients of a,b,c of the Quadtractic Equation { ax^2 + bx + c }\n");
	printf("Input Value of a   : ");
	scanf("%f",&a);
	printf("Input Value of b   : ");
	scanf("%f",&b);
	printf("Input Value of c   : ");
	scanf("%f",&c);
	d=(b*b)-(4*a*c);
	if(d<0)
		printf("The Roots of Equation are Imaginary\n");
	else
	{
		printf("The One Root is    : %f\n",(-b+sqrt(d))/(2*a));
		printf("The Second Root is : %f",(-b-sqrt(d))/(2*a));
	}
	return 0;
}