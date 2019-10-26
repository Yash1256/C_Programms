#include<stdio.h>
int power(int j);
int main()
{
	int a,k=0;
	printf("Input The Number : ");
	scanf("%d",&a);
	for(int n=a;n>0;k++)
		n=n/10;
	printf("0");
	for(;a>0;k--)
	{
		printf("%d",a);
		a=a%(power(k));
		printf("\n");
	}
	return 0;
}
int power(int j)
{
	int d=1;
	for(int i=0;i<j;i++)
		d*=10;
	return d;
}