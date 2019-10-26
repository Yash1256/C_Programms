#include<stdio.h>
int main()
{
	printf("The size of 978 is           :: %d",sizeof(978));
	printf("\nThe size of 3.142 is         :: %d",sizeof(3.142));
	float a=2.3543;
	printf("\nThe decimal part of number is :: %f",a-(int)a);
	char ch[15];
	int j=0;
	printf("\nInput the string              :: ");
	scanf("%s",ch);
	for(;ch[j]!='\0';)
		j++;
	if(j<8)
		printf("Input condition dosen't satisfied String must be minimum of 7 character's ");
	else
	{
		printf("The first 4 Character of string :: ");
		for(int i=0;i<4;i++)
			printf("%c ",ch[i]);
	}
	return 0;
}