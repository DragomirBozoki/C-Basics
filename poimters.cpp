#include <stdio.h>
#include <stdint.h>
#include <string.h>

/*

    Basics of Pointers in C++ and when and why to use it

*/
void f1(uint8_t s){
    printf("Address of variable in f1 is: %p\n", &s);
    s = 32;
}

void f2(uint8_t* ptrs){
    printf("===============================\n");
    printf("Address of variable in f2 is: %p\n", ptrs);
    printf("Address of variable in f2 is: %p\n", &ptrs);
    *ptrs = 32;
    // pointer with value 32
}


uint8_t f3(){
    return 35; //returns value of 35
}

int main()
{
        uint8_t a = 25;
        char *str = "Pera Peric!";

        printf("Value of a is: %hhu \n",a);
        printf("Address of a is: %p\n", &a);
        f1(a);
        printf("Address of a is: %d \n", a);
        f2(&a);
        printf("Address of a in f2 is: %d \n", a);

        a = f3();
        printf("==================\n");
        printf("Value of a in f3 is: %hh\n",a);



        for(int i =0; i<strlen(str);i++)
        {
            printf("Address: %p\n", &str[i]);
            printf("Value in digital: %d\n", str[i]);
            printf("=*-*-*-**--*-*-*-*-*-\n");
        }
    }
