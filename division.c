#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter dividend:\n");
    scanf("%d",&a);
    printf("Enter divisor:\n");
    scanf("%d",&b);
    printf("The division of %d by %d is %d\n",a,b,a/b);
    return 0;
}