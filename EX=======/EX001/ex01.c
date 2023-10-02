//==============================
// take input from user to print the table of that number

#include <stdio.h>

int table_printer(int tabool) {
    int user_table_input = tabool;
    printf("----------------\n");
    printf("Table of %d:\n", user_table_input);
    printf("----------------\n");

    for (size_t i = 1; i < 11; i++) {
        printf("%d x %d = %d\n" , user_table_input, i, (user_table_input*i));
    }
    printf("----------------\n");
}

int main()
{
    int a;
    printf("Enter a number to print table of it: ");
    scanf("%d", &a);
    table_printer(a);
    return 0;
}
