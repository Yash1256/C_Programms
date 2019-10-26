#include<stdio.h>
#include<math.h>
#define min_rate 100
void answer_1();
void answer_2();
void answer_3();
void answer_4();
void answer_5();
void answer_6();
void answer_7();
void answer_8();
void answer_9();
void answer_10();
void answer_11();
void answer_12();
void answer_13();
void answer_14();
void Bonus_Answer();
int main()
{
	answer_1();
	answer_2();
	answer_3();
	answer_4();
	answer_5();
	answer_6();
	answer_7();
	answer_8();
	answer_9();
	answer_10();
	answer_11();
	answer_12();
	answer_13();
	answer_14();
	Bonus_Answer();
	return 0;
}
void answer_1()
{
	printf("\nAnswer_1\n");
	int m,n;
	printf("Input the number :: ");
	scanf("%d",&m);
	if(m>0)
		n=1;
	else if(m<0)
		n=-1;
	else
		n=0;
	printf("The value of n :: %d ",n);
}
void answer_2()
{
	printf("\nAnswer_2\n");
	int a;
	printf("Input the height of a person :: ");
	scanf("%d",&a);
	if(a<135)
		printf("You are too Small");
	else if((a>=135)&&(a<175))
		printf("You are Of Normal Height");
	else
		printf("You are Tall ");
}
void answer_3()
{
	printf("\nAnswer_3\n");
	int x,y;
	printf("Input The coordinates in format (x,y) :: ");
	scanf("%d,%d",&x,&y);
	if((x>0)&&(y>0))
		printf("The point is in First Quadrant ");
	else if((x<0)&&(y>0))
		printf("The point is in Second Quadrant");
	else if((x<0)&&(y<0))
		printf("The point is in Third Quadrant");
	else
		printf("The point is in Fourth Quadrant");
}
void answer_4()
{
	printf("\nAnswer_4\n");
	float a,b,c;
	printf("Input Sides Of a Triangle :: ");
	scanf("%f %f %f",&a,&b,&c);
	if(((a+b)>c)&&((a+c)>b)&&((b+c)>a))
	{
		if(a==b==c)
			printf("The Triangle is Equilateral ");
		else if((a==b)||(a==c)||(b==c))
			printf("The Triangle is Isosceles");
		else
			printf("The Triangle is Scalene");
	}
	else
		printf("The Triangle can't be formed Thereby can't predict Scalene,Isosceles and Equilateral");
}
void answer_5()
{
	printf("\nAnswer_5\n");
	int a,b,c;
    printf("Input the angles of a Triangle :: ");
    l:
    scanf("%d %d %d",&a,&b,&c);
    if((a==180)||(b==180)||(c==180))
    {
        printf("Sorry you Input Wrong !!!!!\n");
        printf("Input Three angles again :: ");
        goto l;
    }
    else if(((a==90)&&(b==90))||((b==90)&&(c==90))||((a==90)&&(c==90)))
    {
        printf("Sorry you Input Wrong !!!!!\n");
        printf("Input Three angles again :: ");
        goto l;
    }
    else
    {
        if((a+b+c)==180)
            printf("The Triangle can be formed ");
        else
            printf("The Triangle can't be formed beacuse angle sum is not 180");
    }
}
void answer_6()
{
	printf("\nAnswer_6\n");
	char a;
	printf("Input something (ONLY CHARACTER) :: ");
	getchar();
	scanf("%c",&a);
	if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
		printf("You Input a Character!!!!!");
	else if((a>='0')&&(a<='9'))
		printf("You Input a Digit!!!!!");
	else
		printf("You Input a Special Character!!!!!");
}
void answer_7()
{
	printf("\nAnswer_7\n");
	int a;
	printf("Input The number to be checked Odd or Even :: ");
	scanf("%d",&a);
	if(a%2==0)
		printf("The Inputed Number is Even ");
	else
		printf("The Inputed Number is Odd ");
}
void answer_8()
{
	printf("\nAnswer_8\n");
	int a,b,c;
	printf("Input The Sides Of a Triangle :: ");
	scanf("%d %d %d",&a,&b,&c);
	if((a*a==(b*b+c*c))||(b*b==(a*a+c*c))||(c*c==(a*a+b*b)))
		printf("The Triangle is a Right Triangle ");
	else
		printf("The Triangle is not a Right Triangle");
}
void answer_9()
{
	printf("\nAnswer_9\n");
	int a;
	printf("Input the Week Day :: ");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("Monday");
				break;
		case 2: printf("Tuesday");
				break;
		case 3: printf("Wednesday");
				break;
		case 4: printf("Thrusday");
				break;
		case 5: printf("Friday");
				break;
		case 6: printf("Saturday");
				break;
		case 7: printf("Sunday");
				break;
		default:printf("Wrong Input ");
	}
}
void answer_10()
{
	printf("\nAnswer_10\n");
	char ch[40];
    float a,b;
    printf("Input Your Name :: ");
    getchar();
    gets(ch);
    printf("Input Your Unit Consumed :: ");
    scanf("%f",&a);
    if(a<=200)
        b=min_rate + ((0.80)*a);
    else if((a>200)&&(a<=300))
        b=min_rate + ((0.90)*a);
    else
        b=min_rate + (1*a);
    if(b>400)
        b+=((0.15)*b);
    printf("-------ELECTRICITY BILL-------- \n");
    printf("Your Name :: ");
    puts(ch);
    printf("Your Total Amount is :: %f",b);
}
void answer_11()
{
	printf("\nAnswer_11\n");
	char ch[100];
	int j=0,k=0;
	getchar();
	printf("Input The String :: ");
	gets(ch);
	for(int i=0;ch[i]!='\0';i++)
		if((ch[i]>='A')&&(ch[i]<='Z'))
			j++;
		else if((ch[i]>='a')&&(ch[i]<='z'))
			k++;
	printf("The Number of Upper Case Alphabets are :: %d",j);
	printf("\nThe Number of Lower Case Alphabets are :: %d",k);
}
void answer_12()
{
	printf("\nAnswer_12\n");
	int a;
    printf("Input the number whose divisibility is to be checked :: ");
    scanf("%d",&a);
    if((a%6==0)||(a%4==0))
    {
        if((a%6==0)&&(a%4==0))
            printf("Number is Divisible by both 6 and 4");
         else if(a%6==0)
     	   printf("Number is Divisible by 6 not 4");
    	else if(a%4==0)
        	printf("Number is Divisible by 4 not 6");
    	else
   	 		printf("Neither Divisibe by 6 nor 4");
 	}
}
void answer_13()
{
	printf("\nAnswer_13 By If-Else \n");
	char T;
    float x;
    printf("Input The Angle in Radian :: ");
    scanf("%f",&x);
    printf("Press s for sin function\nPress t for tan function\nPress c for cos function\n");
    getchar();
    scanf("%c",&T);
    if((T=='s')||(T=='S'))
        printf("The Sine Value of The Angle is :: %f",sin(x));
    else if((T=='c')||(T=='C'))
        printf("The Cosine Value of The Angle is :: %f",cos(x));
    else if((T=='t')||(T=='T'))
        printf("The Tangent Value of The Angle is :: %f",tan(x));
    else
        printf("Option Not Given!! Wrong Input");
}
void answer_14()
{
	printf("\nAnswer_13 By Switch Case\n");
	char T;
	float x;
	printf("Input The Angle in Radian :: ");
	scanf("%f",&x);
	printf("Press s for sin function\nPress t for tan function\nPress c for cos function\n");
	getchar();
	scanf("%c",&T);
	switch(T)
	{
		case 't':
		case 'T': printf("The Tangent Value of The Angle is :: %f",tan(x));
				break;
		case 's':
		case 'S': printf("The Sine Value of The Angle is :: %f",sin(x));
				break;
		case 'c':
		case 'C': printf("The Cosine Value of The Angle is :: %f",cos(x));
				break;
		default:  printf("Option Not Given!! Wrong Input");
	}
}
void Bonus_Answer()
{
	printf("\nBonus Answer\n");
	int age;
	double ann_income,cess,tax;
	printf("Input Your Age :: ");
	scanf("%d",&age);
	printf("Input Your Annual Income :: ");
	scanf("%lf",&ann_income);
	if(age<60)
	{
		if(ann_income<=250000)
			tax=0;
		else if((ann_income>250000)&&(ann_income<=500000))
		{
			tax=((0.05)*(ann_income - 250000));
			cess=(0.04)*tax;
			tax+=cess;
		}
		else if((ann_income>500000)&&(ann_income<=1000000))
		{
			tax=((0.20)*(ann_income - 500000))+12500;
			cess=(0.04)*tax;
			tax+=cess;
		}
		else
		{
			tax=((0.30)*(ann_income - 1000000))+112500;
			cess=(0.04)*tax;
			tax+=cess;
		}
	}
	else if((age>=60)&&(age<80))
	{
		if(ann_income<=300000)
			tax=0;
		else if((ann_income>300000)&&(ann_income<=500000))
		{
			tax=((0.05)*(ann_income - 300000));
			cess=(0.04)*tax;
			tax+=cess;
		}
		else if((ann_income>500000)&&(ann_income<=1000000))
		{
			tax=((0.20)*(ann_income - 500000))+10000;
			cess=(0.04)*tax;
			tax+=cess;
		}
		else
		{
			tax=((0.30)*(ann_income - 1000000))+110000;
			cess=(0.04)*tax;
			tax+=cess;
		}
	}
	else
	{
		if(ann_income<=500000)
			tax=0;
		else if((ann_income>500000)&&(ann_income<=1000000))
		{
			tax=((0.20)*(ann_income - 500000));
			cess=(0.04)*tax;
			tax+=cess;
		}
		else
		{
			tax=((0.30)*(ann_income - 1000000))+100000;
			cess=(0.04)*tax;
			tax+=cess;
		}
	}
	if(tax>0)
		printf("Your Total Payable Tax is :: %lf",tax);
	else
		printf("Your Total Payable Tax is \"NIL\"");
}