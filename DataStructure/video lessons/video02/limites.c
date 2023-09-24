// data types
//char 1 byte
// 2 or 4 bytes
//float 4 bytes
//double 8 bytes

#include <limits.h> // define constantes
#include <stdio.h>

int main(){
    printf("Inteiro minimo : %d maximo: %d\n", INT_MIN, INT_MAX);
    printf("Inteiro sem sinal maximo: %d\n", UINT_MAX);
    printf("Numero de bits por byte: %d\n", CHAR_BIT);
    printf("Char minimo: %d maximo: %d\n", CHAR_MIN, CHAR_MAX);
    char vchar;
    int vint;
    short int vshortint;
    long int vlongint;
    float vfloat;
    double vdouble;
    long double vlongdouble;
    printf("Tamanho do char %d bytes\nTamanho do int %d bytes\nTamanho do short int %d bytes\nTamanho do long int %d bytes\nTamanho do float %d bytes\nTamanho do double %d bytes\nTamanho do long double %d bytes\n", vchar, vint, vshortint, vlongint, vfloat, vdouble, vlongdouble);
    return 0;
}
