#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1025;
    int *p = &a;

    printf("Adress p is %d\n", p);
    printf("size of int %d\n", sizeof(int));
    printf("Adress of p + 1 is %d\n", p + 1);

    char *p0;
    p0 = (char*)p;
    printf("Size of char is %d bytes \n", sizeof(char));
    printf("Adress = %d, value = %d\n", p0,*p0);
    printf("Adress = %d, value = %d\n", p0+1,*p0+1);

    void *p1;
    p1 = p;
    printf("Address of void pointer is = %d\n", p0);


}
