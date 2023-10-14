// jai shree ram
#include <stdio.h>

int jax()
{

    int marks[5];
    marks[0] = 22;
    printf("%d", marks[0]);
}

int arr1p() {

    int ar[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", ar[i][j]);
        }
        
    }
    

}

int main() {

    arr1p();

    return 0;
}
