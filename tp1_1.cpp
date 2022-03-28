#include<stdio.h>

int main()
{
    int variable1 = 20;
    int * puntero_variable;
    puntero_variable= &variable1;

    printf("contenido del puntero: %p \n", puntero_variable);
    printf("Direccion de memoria de la variable: %p\n", &variable1);
    printf("Direccion de memoria del puntero: %p\n", &puntero_variable);
    printf("Tamanio de memoria utilizado por la variable: %d\n", sizeof(variable1));
    printf("El contenido de la variable: %d\n", *puntero_variable);

    getchar();
    return 0;
}