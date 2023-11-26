#include <stdio.h>

int main(){

    int x; //declaration
    x = 123; //initialization
    int y = 321;// both

    int age = 21;//integer
    float gpa = 2.05; //floating point number
    char grade = 'C';//single character
    char name[] = "Marcio";//array of characters


    printf("You are %d years old\n",age);
    printf("Your grade is %c\n", grade);
    printf("Your gpa is %f", gpa);
    printf("\nMy name is %s", name);
    return 0;
}