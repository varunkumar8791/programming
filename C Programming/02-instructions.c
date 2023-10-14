#include <stdio.h>
int main()
{
    // // int a = 4;  // Type declaration instruction
    // int a = 4, b, c; // Type declaration instruction
    // // b = c = a;

    // printf("c is: %d \n" , c);
    // a = b = c;
    // printf("The value of a is %d\n", a);
    // printf("The value of b is %d\n", b);
    // printf("The value of c is %d\n", c);

    int a = 4;
    int b = 2;
    a = b;
    printf("b is: %d \n", b); // 2
    printf("a is: %d \n", a); // 2
    return 0;
}
