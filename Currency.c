#include<stdio.h>
int main()
{
	int a;
	printf("Input the Amount to be Broken : ");
	scanf("%d",&a);
	printf("2000*%d",a/2000);
	a=a%2000;
	printf(" + 500*%d",a/500);
	a=a%500;
	printf(" + 200*%d",a/200);
	a=a%200;
	printf(" + 100*%d",a/100);
	a=a%100;
	printf(" + 50*%d",a/50);
	a=a%50;
	printf(" + 20*%d",a/20);
	a=a%20;
	printf(" + 10*%d",a/10);
	a=a%10;
	printf(" + 5*%d",a/5);
	a=a%5;
	printf(" + 2*%d",a/2);
	a=a%2;
	printf(" + 1*%d",a);
	return 0;
}