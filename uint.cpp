#include <stdio.h>
#include <stdint.h>

//#define FOR
//#define WHILE
#define DO_WHILE
int main(){

    unsigned short i;
    int pos = 0;


    printf("====ASCI TABEL====");

    #ifdef FOR

    for(i=33; i<128;i++){
        printf("%d. Char position: %hu, charachter: %c \n",pos,i,i);
        pos++;

    }

    #endif // FOR

    #ifdef WHILE
    i = 33;
    while(i<128){
        if(i%2 == 0){
            i++;
            continue;
        }
        else{
            printf("Char position: %hu, character: %c\n",i,i);
            i++;
        }

    }
    #endif // WHILE

    i=33;
    #ifdef DO_WHILE
    do {
        if(i == 'w'){
            break;
        }
        printf("Char position: %hu, character: %c\n",i,i);
        i++;

    }while(i<128);

    #endif // DO_WHILE

}
