#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	printf("The assigned value for a is           :: %d",a);
	printf("\nThe assigned value for b is           :: %d",b);
	printf("\nThe assigned value for c is           :: %d",c);
	printf("\nThe pre-imcrement of a is             :: %d",++a);
	a+=++a;
	a+=b--;
	printf("\nAfter adding to post-decrement of b   :: %d",a);	
	printf("\nAfter subtracting post-incremrnt of c :: %d",a-(c++));
	return 0;
}