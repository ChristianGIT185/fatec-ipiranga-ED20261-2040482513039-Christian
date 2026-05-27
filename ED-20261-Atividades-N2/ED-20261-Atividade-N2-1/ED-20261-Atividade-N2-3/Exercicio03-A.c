/*                   RA: 2040482513039 - Christian Moreira Santos                   */
/*----------------------------------------------------------------------------------*/
/*                                FATEC - Ipiranga                                  */
/*                            ADS - Estrutura de Dados                              */
/*                             ID da Atividade: N2-3                                */
/*             Objetivo: Consolidação de Competências em Linguagem C                */
/*                                                                                  */
/*                       Autor: Christian Moreira Santos                            */
/*                                                                  Data:19/05/2026 */
/*----------------------------------------------------------------------------------*/

#include <stdio.h>

//Declarando a função hanoi
void hanoi(int n, char origem, char destino, char auxiliar) {
    // Quando existir apenas 1 disco
    if (n == 1) {

        printf("Mover disco 1 de %c para %c\n", origem, destino);

        return;
    }

    // Move os discos para a haste auxiliar
    hanoi(n - 1, origem, auxiliar, destino);

    // Move o maior disco
    printf("Mover disco %d de %c para %c\n", n, origem, destino);

    hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    printf("/t Teste com N = 4/t");
    hanoi(1, 'A', 'C', 'B');

    printf("/t Teste com N = 3");
    hanoi(3, 'A', 'C', 'B');

    printf("\t Teste com N = 4\t");
    hanoi(4, 'A', 'C', 'B');

    return 0;
}
