#include <stdio.h>
#include <stdlib.h>



int main()
{
    // Pointers and File Writings and File Readings
    char line[255];
    FILE * fpointer = fopen("employes.txt", "r");

    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    printf("%s", line);



    fclose(fpointer);
    return 0;

    }

