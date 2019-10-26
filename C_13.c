#include<stdio.h>
int main()
{
	char ch[40];
	int i=0;
	printf("Input 5 character's in a sequence :: ");
	scanf("%s",ch);
	printf("The reverse order of them is      :: ");
	for(;ch[i]!='\0';)
		i++;
	for(--i;i>=0;i--)
		printf("%c",ch[i]);
	return 0;
}