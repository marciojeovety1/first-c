#include <stdio.h>

int main(){

    int age;
    char name[25];//bytes
    
    printf("\nWhat's your name? ");
    fgets(name, 25, stdin);
    
    printf("\nHow old are you? ");
    scanf("%d", &age);

    //scanf("%s", &name);
    printf("\nYou are %d years old ", age);
    printf("Thanks %s, you are welcome", name);
}