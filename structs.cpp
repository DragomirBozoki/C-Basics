#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct automobil{
    char mark[50];
    uint16_t year;
    uint32_t spun_km;


};

int main(){

    struct automobil bmw;
    struct automobil yugo;

    bmw.mark = "bmw";
    bmw.year = 2012;
    bmw.spun_km = 250000;

    yugo.mark = "Zastava";
    yugo.year = 1989;
    yugo.spun_km = 720000;

    printf("Mark of first Car is %s and of second is %s", bmw.mark,yugo.mark)
    bmw.year++
    printf("Year of production for BMW is: %s ", bmw.year)



}
