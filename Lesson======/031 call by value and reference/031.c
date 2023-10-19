#include<stdio.h>
//local var and global var and calling values in fiuntions


int func2(int *bobo){           //dont used without (*) cuz error

    printf("%d\n", bobo);       //address of dox passed into bobo
    printf("%d\n", *bobo);      //values of dox passed into *bobo

    return 0;
}


int main() {
    int dox = 100;


    func2(&dox);    //passed the address of dox to func2 via bobo

    return 0;
}

//call by value creates a copy of the value and pass it with paramameters real and copied values both have defferenct addressses

//call by reference take the address of the values and pass that add in parameter and with this we can change the real values of the vars in any functions
