#include <stdio.h>

int func1(int jax[]){       //doesnt pass values by creating copies it just operate with address in arrrays parameter

    for (int i = 0; i < 4; i++)
    {
        printf("the values at %d is %d\n", i, jax[i]);
    }
    
    jax[3] = 100;   //very important point that if you change any value here, it gets reflected in main()

    return 0;
}

int func2(int* ptr){

    //need to seee again

    return 0;
}

int main() {

    int array[] = {11, 22, 33, 44};

    printf("the values of array[4] before fn: %d\n", array[3]);
    func1(array);
    printf("the values of array[4] after fn: %d\n", array[3]);

    func2(array);

    return 0;
}