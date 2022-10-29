#include <stdio.h>
#include <stdint.h>
int main(){

    uint32_t reg;
    reg = 0xDEBA;
    printf("reg --> hexadecimal 0x%X\n",reg>>8,reg&0x00FF|reg<<8);


}
