#include <stdio.h>

#define PI 3.14          //used at defining constants

int main()
{

    int a = 8;
    float b = 2.3456;
    printf("%f\n", b);
    printf("%1.2f\n", b);
    printf("%1.8f\n", b); // 1.8 denotes the number of decimals in floats
    printf("%8.8f\n", b); // 8 character ke space me, 8 decimal point ke accuracy ke sath

    //----------------------------------

    printf("%f" , PI);

    return 0;
}
