#include<stdio.h>

int for_loop_tut() {
    int i;                   //we can declare vars beore declaring loop
    for(i = 0; i<5; i++) {  
        printf("ok\n");
    }
}

int for_loop_tut2() {
    for(int i = 0; i<5; i++) {  //we can directly initialize i in line 
    printf("k\n");
    }
}

int main(){

    for_loop_tut();
    for_loop_tut2();

    return 0;
}