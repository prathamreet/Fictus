#include <stdio.h>

int age_verifier(int age) {
    int user_input_age;
    user_input_age = age;
    printf("enter your age: ");
    scanf("%d" , &user_input_age);

    if(user_input_age>18){
        printf("your older");
    }
    else if(user_input_age == 18) {
        printf("your just 18");
    }
    else{
        printf("you are younger");
    }
}

int main() {
    age_verifier(15);
    return 0;
}