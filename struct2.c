#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[53];
};
struct employee s1, s2;

int main()
{
    s1.id = 1;
    s2.id = 2;
    
    strcpy(s1.name, "Aman");
    strcpy(s2.name, "Ashu");
    
    printf("Id of s1 is: %d\n",s1.id);
    printf("Id of s2 is: %d\n",s2.id);
    printf("Name of s1 is: %s\n",s1.name);
    printf("Name of s2 is: %s\n",s2.name);
    return 0;
    
}