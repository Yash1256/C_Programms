#include<stdio.h>
int main()
{
	int x;
	x=(printf("AA")||printf("BB"));
	printf("%d",x);
}