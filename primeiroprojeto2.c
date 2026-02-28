#include <stdio.h>

int main(){
    int idade = 37;
    int documento = 2287;
    char local[20] = "praia";
    char nome[20] = "Desire"; 
    float altura = 1.68;
    float peso = 62;
    char profissão[50] = "Professora";

    printf("O nome é: %s\n", nome);
    printf("A idade da %s é %d\n", nome, idade);
    printf("A profissão é: %s\n", profissão);
    printf("Onde ela mora é na %s\n", local);
    printf("A altura e o peso são: %.2f e %.2fkg\n", altura, peso);
    printf("O documento é: %d", documento);

    return 0;











}