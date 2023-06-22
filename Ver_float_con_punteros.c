// Ver flotante con punteros
#include <stdio.h>

int main()
{
    float valor = 12.25;
    char *puntero = (char *) &valor; //Casteo una variable tipo float a un puntero char 
    
    printf("%.2X", *puntero); //Imprimo a donde apunte puntero
    printf("%.2X", *(puntero + 1)); //Incremento una unidad de dato a la dirección de memoria e imprimo el nuevo contenido
    printf("%.2X", *(puntero + 2));
    printf("%.2X", *(puntero + 3));
    
    return 0;
}
