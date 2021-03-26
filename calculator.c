#include <stdio.h>

void add()
{
    int a,b;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("Enter another number:\n");
    scanf("%d",&b);
    printf("The sum of %d and %d is %d\n",a,b,a+b);
}
void sub()
{
    int p,q;
    printf("Enter a number:\n");
    scanf("%d",&p);
    printf("Enter another number:\n");
    scanf("%d",&q);
    printf("The subtraction of %d and %d is %d\n",p,q,p-q);
}
void multiply()
{
    int x,y;
    printf("Enter a number:\n");
    scanf("%d",&x);
    printf("Enter another number:\n");
    scanf("%d",&y);
    printf("The product of %d and%d is %d\n",x,y,x*y);
}
void division()
{
    int k,l;
    printf("Enter dividend:\n");
    scanf("%d",&k);
    printf("Enter divisor:\n");
    scanf("%d",&l);
    printf("The division of %d and %d is %d\n",k,l,k/l);
}

int main()
{
    char i;
    
    printf("Hello!\n");
    printf("I am a calculator.\n");
    printf("Created by prof.Aman Thakur\n");
    printf("I can perform +,-,/,*.\n");
    
    printf("Enter your operator:\n");
    scanf("%c",&i);
    switch(i)
    {
        case '+':
            add();
            break;
        case '-':
            sub();
            break;
        case '/':
            division();
            break;
        case '*':
            multiply();
            break;
        default:
            printf("Invalid operator!\n");
        
    }
    printf("Thank you!\n");
    return 0;
    
}