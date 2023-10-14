// there are four arithmetics operators that can be used on pointers
//++ , --, + , -

/*
int a = 2
a++
-> will give three
but inpointes
int * ptr = &a
ptr = ptr +1
-> will add 1 to the sizeof(int)
*/

#include <stdio.h>

int main()
{

    int a = 24;
    int *ptra = &a;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1); // it will add 1 as (1 size of int [bit]) ie 4 {depends on architechture}

    //--------------------------

    int arrr[10]; // tpe = integer array
    printf("--------------\n");

    int arr[5] = {2, 3, 4, 5, 6};   
    printf("%d\n", arr[2]);             //prints the value of array of index 2
    printf("%d\n", &arr[2]);            //prints the address of arrray of index 2 --- (can also use %x)

    return 0;
}