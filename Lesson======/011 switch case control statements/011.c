#include <stdio.h>

int switch_tut() {
    int a = 2;

    switch (a)
    {
    case 1:
        printf("no");
        break;              //to exit in the case and return
    
    case 2:
        printf("bo");
        break;              //to exit in the case and return

    case 3:
        printf("jaja");
        break;              //to exit in the case and return

    //if you want to print default then dont apply break
    default:
        printf("non of the case mentioned");
    }
}

//-----------------------------

int switch_salary() {
    int b;
    printf("enter your salary: ");
    scanf("%d", &b);

    switch (b) {

        case 1000:
            printf("you are poor!");
            break;

        case 2000:
            printf("you are middle class");
            break;
        
        case 3000:
            printf("you are rich!");
            break;

        default:
            printf("you are unemployed");
    }    
}

int main() {

    switch_tut();
    switch_salary();

    return 0;
}