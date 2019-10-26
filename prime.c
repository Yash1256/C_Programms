#include<stdio.h>
int k=0;
void prime(int j);
void main()
{
	int n;
	printf("Input The Number to be checked : ");
	scanf("%i",&n);
	prime(n);
}
void prime(int j)
{
	int n,k=0;
	printf("Input The Number to be checked : ");
	scanf("%i",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			k++;
		if(k>2)
			break;
	}
	if(k==2)
		printf("It's a Prime Number\a");
	else
		printf("It's not a Prime Number");
}