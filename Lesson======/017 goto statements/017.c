#include <stdio.h>

int main() {

    lalu:
        printf("dada");     //avoid these type of loop
    goto lalu;

    return 0;
}

//break only exit you from current working fucntion

//but what if u wanna exit the whole code from execution
//then we use goto statement