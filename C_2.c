#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Input the value of x : ");
	scanf("%d",&x);
	printf("Input the value of y : ");
	scanf("%d",&y);
	printf("Input the value of z : ");
	scanf("%d",&z);
	if(y==1)
	{
		x=y+1;
		z=x++;
	}
	else
		z=y++;
	printf("The value of x is   :: %d , y is :: %d , z is :: %d ",x,y,z);
	return 0;
}