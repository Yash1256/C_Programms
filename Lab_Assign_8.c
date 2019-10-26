#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

long power(int n)
{
    long p=1,b;
    b=p<<n;
    return b;
}
void Answer_1()
{
    printf("Answer_1\n");
    int n;
    printf("Input The Power of 2 :: ");
    scanf("%d",&n);
    long p=power(n);
    printf("The Output result is :: %ld\n",p);
}
void Answer_2()
{
    getchar();
    printf("Answer_2\n");
    char ch[100];
    printf("Input The String :: ");
    scanf("%s",ch);
    int l,d=0;
    for(l=0;ch[l]!='\0';l++);
    for(int i=0;i<l/2;i++)
        if(ch[i]==ch[l-i-1])  
            d++;
    if(d==l/2)
        printf("String is Pallindrome\n");
    else
        printf("String is not Pallindrome\n");    
}
void sub(char ch[],char ar[],int l1,int l2,int k)
{
    int o=0;
    for(int i=0,b=0;i<l1-k+1;i++)
    {
        char ch1[k];
        for(int j=i,g=0;j<i+k;j++,g++)
            ch1[g]=ch[j];
        for(int j=0;j<l2-k+1;j++)
        {
            for(int l=j,n=0;l<j+k;l++,n++)
            {
                if(ch1[n]==ar[l])
                    b++;
                else
                    break;
            }
            if(b==k)
            {
                for(int v=0;v<k;v++)
                    printf("%c",ch1[v]);
                printf("\n");
                o++;
                b=0;
                break;
            }
        }
    }
}
void Answer_3()
{
    getchar();
    printf("\nAnswer_3\n");
    char ch[100],ar[120];
    printf("Input The First String :: ");
    scanf("%s",ch);
    printf("Input The Second String :: ");
    scanf("%s",ar);
    int k,o=0;
    printf("Input The size for the Subset :: ");
    scanf("%d",&k);
    int l1,l2;
    for(l1=0;ch[l1]!='\0';l1++);
    for(l2=0;ar[l2]!='\0';l2++);
    for(int i=1;i<=k;i++)
        sub(ch,ar,l1,l2,i);
}
void print2D(int ar[],int j,int n)
{
    if(ar[(((n*2)+2)/2)+j]%2==0)
    {
        int ar1[3][3],r=0,c=0;
        for(int i=j,h=0;i<=2+(n*2)+j;i+=n,h++)
        {
            for(int k=i,e=0;k<i+3;k++,e++)
            {
                ar1[h][e]=ar[k];
                printf("%d ",ar[k]);
            }
            printf("\n");
        }
        for(int i=0;i<3;i++,c=0)
        {
            for(int j=0;j<3;j++)
                c+=ar1[i][j];
            printf("Column Sum %d = %d\n",i+1,c);
        }
        for(int i=0;i<3;i++,r=0)
        {
            for(int j=0;j<3;j++)
                r+=ar1[j][i];
            printf("Row Sum %d = %d\n",i+1,r);
        }
    }
}
void Answer_7()
{
    printf("\nAnswer_7\n");
    int n;
    printf("Input The Number of elements :: ");
    scanf("%d",&n);
    int ar[n*n];
    srand(time(NULL));
    int m=20;
    int e=30;
    for(int i=0;i<n*n;i++)
        ar[i] = m + rand()%(e - m + 1);
    for(int i=0;i<(n*n)-(n*2)-1;i+=n)
        for(int j=i;j<i+(n-2);j++)
            print2D(ar,j,n);
}
void Answer_6()
{
    printf("\nAnswer_6\n");
    printf("The Number of Substrings are :: \n");
    int a[30]={1,3,4,5,6,2,3,8,7,6,5,4,3,2,3,4,2,5,1,9,8,4,3,2,1,5,2,6,7,8};
    for(int i=0;i<30;i++){
        for(int j=i+1;j<30;j++){
            if(a[i]==a[j]){
                int k=i+1;
                int k1=i+2;
                int f=j-1;
                int f1=j-2;
                if(a[k]==a[f] && a[k1]==a[f1]){ 
                    printf("%d %d %d",a[i],a[i+1],a[i+2]);
                    printf("\n");
                } 
            }
        }  
    }
}
int prime(int k)
{
    int i,c=0,f=0;
    for(int j=2;j<k;j++)
        if(k%j==0)
            c++;
    if(c==0)
        f=1;
    return f;
}
void Answer_5()
{
    printf("\nAnswer_5\n");
    int a[20]={2,15,7,6,3,8,22,41,23,4,18,13,5,27,47,12,11,23,10,9};   
    int p,s=0,f;
    for(int i=0,c=0;i<20;i++)
        for (int j=1;j<20;j++){
            f=prime(a[j]);
            p=prime(a[i]);
            if(p==1 && f==1){
                s=a[i]+a[j];
                int f1=0;
                for(int k=0;k<20;k++){

                    if(s==a[k]){
                        f1=1;
                        break;
                    }       
                }
                if(f1==1){
                    printf("Pair number %d :: (%d,%d) and their sum is :: %d",c+1,a[i],a[j],a[i]+a[j]);
                    printf("\n");
                    c++;
                }
                s=0;
            }
        } 
}
int max(int b[],int n)
{
    int m=b[0];
    for(int j=0;j<n;j++)
        if(b[j]>m && b[j]%2==0)
            m=b[j];
    return m;
}
int min(int b[],int n)
{
    int m;
    for(int k=0;k<n;k++)
        if(b[k]%2==0){
            m=b[k];
            break;
        }
    for(int j=0;j<n;j++)
        if(b[j]<m && b[j]%2==0)
            m=b[j];
    return m;
}
int gcd(int x,int y)
{
    int m=1,min1;
    if(x>y)
    min1=y;
    else
    min1=x;
    for(int j=2;j<=min1;j++)
        if(x%j==0 && y%j==0)
            m=j;
    return m;
}
void Answer_4()
{
    printf("\nAnswer_4\n");
    int n;
    printf ("enter the value of n between 20 and 30 :: ");
    scanf("%d",&n);
    int a[n];
    printf("Now Input The elements for the array :: \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("smallest even number %d\n",min(a,n));
    printf("largest even number%d\n",max(a,n));
    printf("gcd of two numbers %d\n",gcd(max(a,n),min(a,n)));
}
int main()
{
    Answer_1();
    Answer_2();
    Answer_3();
    Answer_4();
    Answer_5();
    Answer_6();
    Answer_7();
    return 0;
}