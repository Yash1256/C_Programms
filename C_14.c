#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch[6];
	printf("Input 5 Character's   :: ");
	for(int i=0;i<6;i++)
		ch[i]=getchar();
	printf("Reverse Order of them :: ");
	for(int j=5;j>=0;j--)
		putchar(ch[j]);
	return 0;
}