#include<stdio.h>

int main()

{
    // comments

    int a,b;

    printf("Enter a number: ");

    //scanf("%d %d", &a, &b);

    scanf("%d", &a);

    printf("Enter another number: ");

    scanf("%d", &b);

    printf("The value of a is %d\n", a);

    // \n -> new line

    printf("And the value of b is %d", b);
    return 0;
}
