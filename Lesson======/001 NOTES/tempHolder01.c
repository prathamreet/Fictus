#include<stdio.h>

int main() {

    int a = 5;
    printf("%d\n", a);
    printf("%d\n", &a);
    
    int b = &a;
    
    printf("%d\n", b);
    printf("%d\n", &b);

    int *c = &b;

    printf("%d", c);


    return 0;
}