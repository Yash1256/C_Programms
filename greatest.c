#include<stdio.h>
int main()
{
	int a[100],n;
	printf("Input How many numbers you want to input : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int k=a[0];
	for(int i=1;i<n;i++)
		if(a[i]>k)
			k=a[i];
	printf("The greatest number is : %d",k);
}