#include <iostream>
#include <stdio.h>


int main(){

    int int_var;
    short short_var;
    long long_var;


    int_var = 123;
    short_var = -59;
    long_var = 926355421;

    printf("Int value %d, size: %d bytes", int_var,sizeof(int_var));
    printf("\nInt value %d, size of %d",short_var, sizeof(short_var));
    printf("\nInt value %ld, size of %d", long_var, sizeof(long_var));

    char char_var;
    char_var = 'a';
    printf("Char var value: %c,\n char var int value %d,\n char var size : %d",char_var, char_var, sizeof(char_var));

    float float_var = 1.64542525;
    double double_var = 1E7;

    printf("\n=======================");
    printf("\nFloat Var is %f, size %d", float_var, sizeof(float_var));

}

