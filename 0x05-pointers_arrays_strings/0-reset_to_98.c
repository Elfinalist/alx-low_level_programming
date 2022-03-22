#include <stdio.h>
#include <main.h>

int main()

{

    int shopping = 20;
    int *p = &shopping;

    printf("Shopping: %d\n", shopping) 
    printf("Shopping(through pointer): %d\n", *p);

    *p = 98

    printf("Shopping: %d\n", shopping) 
    printf("Shopping(through pointer): %d\n", *p);

    return 0;
}