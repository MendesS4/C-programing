#include <stdio.h>
int main(){
    int i;
    int vetor1[] = {1,2,3,4,5};
    int vetor2[10] = {20, 21, 23, 24, 25};
    int vetor3[15];

    int q_vetor1 = sizeof(vetor1)/sizeof(int);
    printf("Tamanho do vetor1: %d\n", q_vetor1);
    for(i = 0; i < q_vetor1; i++) printf("vetor1[%02d] = %d\n", i, vetor1[i]);

    int q_vetor2 = sizeof(vetor2)/sizeof(int);
    printf("Tamanho do vetor2: %d\n", q_vetor2);
    for(i = 0; i < q_vetor2; i++) printf("vetor2[%02d] = %d\n", i, vetor2[i]);

    int j = 26;
    for(i = 6; i < q_vetor2; i++, j++){
        vetor2[i] = j;
    }

    q_vetor2 = sizeof(vetor2)/sizeof(int);
    printf("Tamanho do vetor2: %d\n", q_vetor2);
    for(i = 0; i < q_vetor2; i++) printf("vetor2[%02d] = %d\n", i, vetor2[i]);

    int q_vetor3 = sizeof(vetor3)/sizeof(int);
    printf("Tamanho do vetor3: %d\n", q_vetor3);
    for(i = 0; i < q_vetor3; i++) printf("vetor3[%02d] = %d\n", i, vetor3[i]);
    q_vetor3 = sizeof(vetor3)/sizeof(int);
    printf("Tamanho do vetor3 : %d\n" , q_vetor3);

    j = 200;
    for(i = 0; i < q_vetor3; i++, j++){
        vetor3[i] = j;
    }

    for(i = 0; i < q_vetor3; i++) printf("vetor3[%02d] = %d\n", i, vetor3[i]);

}