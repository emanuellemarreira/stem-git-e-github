#include <stdio.h>

int pegarvalor(){
    int valor;
    printf("Digite o valor do saque (entre 10 e 600 reais): ");
    scanf("%d", &valor);
    
    if (valor < 10 || valor > 600) {
        printf("Valor inv�lido. O valor m�nimo � 10 reais e o m�ximo � 600 reais.\n");
        scanf("%d", &valor);
    }
    return valor;
}

int main() {
    int valor, notas_100, notas_50, notas_10, notas_5, notas_1;
   valor = pegarvalor();
    
    notas_100 = valor / 100;
    valor = valor % 100;
    
    notas_50 = valor / 50;
    valor = valor % 50;
    
    notas_10 = valor / 10;
    valor = valor % 10;
    
    notas_5 = valor / 5;
    valor = valor % 5;
    
    notas_1 = valor;
    
    printf("Notas fornecidas:\n");
    printf("Notas de 100 reais: %d\n", notas_100);
    printf("Notas de 50 reais: %d\n", notas_50);
    printf("Notas de 10 reais: %d\n", notas_10);
    printf("Notas de 5 reais: %d\n", notas_5);
    printf("Notas de 1 real: %d\n", notas_1);
    
    return 0;
}

