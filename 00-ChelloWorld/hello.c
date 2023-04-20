#include <conio.h>
#include <stdio.h>

int main()
{
    FILE *arch = fopen("output.txt","w");
    if (arch ==NULL)
    {
        printf("\nError de apertura del archivo. \n\n");

    }
    else
    {
        char mensaje[20]= "hello world";
        fprintf(arch,mensaje);
        printf("hello world");
        getch();

    }
    return 0;
}
