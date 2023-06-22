//Mostrar el signo, el exponente y la mantisa de un float utilizando bits de campo
#include <stdio.h>

union{
    float num;
    struct{
        unsigned int mantisa : 23;
        unsigned int exponente : 8;
        unsigned int signo : 1;
    }_4bytes;
}var;


int main()
{
    printf("Ingrese el valor que quiera ver en formato IEEE754: ");
    scanf("%f", &var.num);
    printf("%d | ", var._4bytes.signo);
    for(int i = 7; i >= 0; i--){
        printf("%d", ((var._4bytes.exponente >> i) &1));
    }
    printf(" | ");
    for(int i = 22; i >= 0; i--){
        printf("%d", ((var._4bytes.mantisa >> i) &1));
    }
    
    return 0;
}

