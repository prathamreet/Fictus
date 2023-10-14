#include <stdio.h>

//DO WHILE
//print to input number via do while
int do_while() {

    int i = 0;
    int x;
    printf("enter number: \n");
    scanf("%d", &x);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<x);
}



int main() {

    do_while();    

    return 0;
}