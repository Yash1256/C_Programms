#include<stdio.h>
int main()
{
	int m=10,n=20,k=30;
	printf("The value of m=%d,n=%d,k=%d ",m,n,k);
	++m;
	m+=k++;
	m+=n--;
	m-=++k;
	printf("\nThe value of m,n,k after operation are ");
	printf("\nThe value of m=%d,n=%d,k=%d ",m,n,k);
	return 0;
}