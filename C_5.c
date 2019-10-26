#include<stdio.h>
int main()
{
	printf("The size of 1234 is           :: %d",sizeof(1260));
	printf("\nThe size of 2.3543 is         :: %d",sizeof(2.3543));
	float a=2.3543;
	printf("\nThe decimal part of number is :: %f",a-(int)a);
	char ch[15];
	printf("\nInput the string              :: ");
	scanf("%s",ch);
	printf("The first 5 Character of string :: ");
	for(int i=0;i<5;i++)
		printf("%c ",ch[i]);
	return 0;
}