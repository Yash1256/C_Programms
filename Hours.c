#include<stdio.h>
int main()
{
	int a;
	printf("Input The Number of Seconds : ");
	scanf("%d",&a);
	printf("Number Of Hours are         : %d\n",a/3600);
	a=a%3600;
	printf("Number Of Minutes are       : %d\n",a/60);
	printf("Number Of Seconds are       : %d\n",a%60);
	return 0;
}