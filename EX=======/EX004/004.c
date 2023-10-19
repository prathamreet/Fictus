/*
take input from the user and ask user to choose 0 for star pattern and 1 of rversed tringular star parttern
*/

#include <stdio.h>

int start_printer(){

    int rows;

    printf("how many rows do you want for star ladder? : ");
    scanf("%d", &rows);

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int start_printer_rev(){

    int rows;

    printf("how many rows do you want for star ladder? : ");
    scanf("%d", &rows);

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j < rows - i; j++)  //changes from sp
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int main()
{

    start_printer();
    start_printer_rev();

    return 0;
}