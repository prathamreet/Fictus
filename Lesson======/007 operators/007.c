#include <stdio.h>

int main() {
    int a = 100;
    int b = 20;

    //arithmatic operators
    printf("the value of a+b = %d\n" , a+b);
    printf("the value of a-b = %d\n" , a-b);
    printf("the value of a*b = %d\n" , a*b);
    printf("the value of a/b = %d\n" , a/b);

    //rational operators
    printf("is a and b is equal?: %d\n" , a==b);            //if equal return 0
    printf("is a and b is not equal?: %d\n" , a!=b);
    printf("is a greator that b?:  %d\n" , a>b);            
    printf("is a lesser that b?:  %d\n" , a<b);             //=< , =>, <, > , ==, !=

    //logical operators
    int c = 1;
    int d = 0;
    printf("if c and d both are yes then and operator is yes: %d\n" , c&&d);
    printf("if c or d anyone is yes then or operator is yes: %d\n" , c||d);
    printf("if anyone one is no and another is yes then exclusive operators is yes: %d\n" , c^d);

    //bitwise a

    //assignment operators
    /*
    =
    +=
    -=
    *=
    /=
    */

   //misc operators
   /*
   sizeof()                 //return int size on that architechture.
   &                        //return the acual addresss of  the var
   *                        //pointer to a variable -> *a
   ?:                       //conditional expression -> if condition is true ? then  value X: otherwise value Y
   */

    return 0;
}