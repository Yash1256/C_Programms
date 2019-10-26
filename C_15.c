#include<stdio.h>
int main()
{
	char ch;
	printf("Input One Alphabet   :: ");
	scanf("%c",&ch);
	ch++;
	printf("The Next Alphabet is :: ");
	printf("%c",ch);
	return 0;
}