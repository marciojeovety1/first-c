#include <stdio.h>

int main(){

    int age;
    char name[25];//bytes
    
    printf("\nHow old are you? ");
    scanf("%d", &age);
    printf("\nYou are %d years old", age);

    printf("\nWhat's your name? ");
    scanf("%s", &name);
    printf("\nThanks %s, you are welcome", name);

}