#include <iostream>

/*Exercício 1
Crie um programa que declare um vetor com 5 números inteiros.
O programa deve:
-pedir ao utilizador para introduzir os 5 números
-mostrar todos os números guardados no vetor*/
/*Exercício 2
Crie um programa que leia 10 números inteiros para um vetor.
No final o programa deve apresentar a soma de todos os elementos do
vetor.*/
/*Exercício 3
Crie um programa que leia 8 números e os guarde num vetor.
O programa deve calcular e apresentar a média dos valores
introduzidos.
Exercício 4
Crie um programa que leia 6 números inteiros para um vetor.
O programa deve determinar e mostrar o maior valor existente no vetor.
Exercício 5
Crie um programa que leia 6 números inteiros para um vetor.
O programa deve determinar e mostrar o menor valor existente no vetor.
Exercício 6
Crie um programa que leia 10 números inteiros.
O programa deve indicar quantos desses números são pares.
Exercício 7
Crie um programa que leia 5 números inteiros para um vetor.
O programa deve mostrar os valores pela ordem inversa.*/

int main (){

    int *vetor = new int[10];
    int soma = 0;
    float media;
    int maiorValor = 0;
    int menorValor;
    int pares = 0;

    for(int i = 0; i < 10; i++){
        std::cout << "Introduza o numero " << i+1 << " : ";
        std::cin >> vetor[i];
        soma = soma + vetor[i];
    }

    menorValor = vetor[0];
    media = soma / 10;

    std::cout << "Imprimindo o vetor: \n";

    for(int i = 0; i < 10; i++){
        std::cout << vetor[i] << " | ";
        if(vetor[i] > maiorValor){
            maiorValor = vetor[i];
        }
        if(vetor[i] < menorValor){
            menorValor = vetor[i];
        }
        if(vetor[i] % 2 == 0){
            pares++;
        }
    }

    std::cout << "\nA soma dos valores do vetor e de " << soma;
    std::cout << "\nA media dos valores e de " << media;
    std::cout << "\nO maior valor existente e " << maiorValor;
    std::cout << "\n" << pares << " numeros sao pares";

    std::cout << "\nImprimindo o vetor invertido: \n";

    for(int i = 9; i >= 0; i--){
        std::cout << vetor[i] << " | ";
    }
    
    delete[] vetor;
    
    return 0;
}