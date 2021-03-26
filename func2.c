//with arguments without return value.
#include <stdio.h>
int printstr(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%c",'*');
    }
}
int main()
{
    printstr(5);
    printf("\n");
    printstr(7);
    printf("\n");
    return 0;
}