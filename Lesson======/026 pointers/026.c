//Jai Shree Ram
// & is the address of the var
// * is the value inside the pointer of poitner of pointer....
//nul poiter is not assigned any values but null is kown as null pointer it doesnt  point to any object `int * ptr = NULL`

#include<stdio.h>

int main() {

    printf("ok\n");

    int a;
    //a is not given values so it gonna print some garbage values
    printf("the value of a is %d\n", a);

    int b = 25;
    printf("the values of b is %d\n", b);
    
    int p = &b;
    int* ptr = &b;
    printf("the address of b is stored in p is = %x\n", p);
    printf("the address of b is stored in p is = %x\n", &p);
    printf("the value of b is = %d\n", *ptr);

    return 0;
}