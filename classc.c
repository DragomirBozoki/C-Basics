#include <stdio.h>
#include <stdlib.h>



int main()
{

    FILE * fpointer = fopen("employes.txt", "a");

    fprintf(fpointer, "\n Ivance, Fittnes");



    fclose(fpointer);
    return 0;

    }

