#include <stdio.h>

struct test
{
    int id;
    float marks;
    char fav_char;
};
int main()
{
    struct test s1, s2, s3, s4;
    s1.id = 1;
    s1.marks = 18.20;
    s1.fav_char = 'a';
    
    s2.id = 2;
    s2.marks = 17.60;
    s2.fav_char = 'b';
    
    s3.id = 3;
    s3.marks = 19.90;
    s3.fav_char = 'c';
    
    printf("Id of s1 is: %d\n",s1.id);
    printf("Marks of s1 is: %f\n",s1.marks);
    printf("Fav_char of s1 is: %c\n\n",s1.fav_char);
    printf("Id of s2 is: %d\n",s2.id);
    printf("Marks of s2 is: %f\n",s2.marks);
    printf("Fav_char of s2 is: %c\n\n",s2.fav_char);
    printf("Id of s3 is: %d\n",s3.id);
    printf("Marks of s3 is: %f\n",s3.marks);
    printf("Fav_char of s3 is: %c\n\n",s3.fav_char);
    return 0;
    
}