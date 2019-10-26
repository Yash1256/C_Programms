#include<stdio.h>
int main()
{
	int a=20,b=10,c=15,d=5,e;
	a=5*3+2-4;
	a=2+4+3*5/3-5;
	e=a+b*c/d;
	a=5*3%6-8+3;
	e=a+b*c/d;
	//b=3 % 0*1-4/2;
	e=a+b*c/d;
	b=3 && 5 & 4%3;
	e=a+b*c/d;
	b=5 & 3 && 4||5||6;
	printf("%d,%d,%d,%d,%d",a,b,c,d,e);
	return 0;
}