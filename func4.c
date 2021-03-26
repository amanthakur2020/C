//with arguments with return value.
#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,c;
    a = 4;
    b = 6;
    c = add(a,b);
    printf("The sum of a and b is: %d\n",c);
    return 0;
}