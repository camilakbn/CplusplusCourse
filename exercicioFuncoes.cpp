#include <iostream>

/* Exercício 1 – Crie uma função que mostre a
mensagem "Olá Mundo".O programa deve
chamar essa função no main.
Exercício 2 – Crie uma função que devolva o
valor dobro de um número inteiro. O
programa deve:
• pedir um número ao utilizador
• mostrar o resultado usando a função
Exercício 3 – Crie uma função que receba
dois números e mostre a soma e a subtração
Exercício 4 – Crie uma função que receba
dois números e devolva o maior valor.
Exercício 5 – Crie um programa que:
• leia 5 números para um vetor
• utilize uma função para mostrar todos os
valores do vetor
Exercício 6 – Crie uma função que receba um
vetor e o seu tamanho. A função deve
devolver a média dos valores.
Exercício 7 – Crie uma função que receba um
vetor e devolva quantos números pares
existem.
Exercício 8 – Crie uma função que receba
uma variável por referência e, altere o seu
valor para o dobro. O programa deve mostrar
o valor antes e depois.
Exercício 9 – Crie uma função que receba
uma matriz 3x3 e mostre todos os elementos*/


//exercicio 1
void mensagem(){
    std::cout << "Ola mundo" << std::endl;
}

//exercicio 2
int valorDobro(int num){
    return num * 2;
}

//exercicio 3
void somaSubtracao(int num1, int num2){
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;
    std::cout << "Soma: " << num1 + num2 << std::endl;
    std::cout << "Subtracao: " << num1 - num2 << std::endl;
}

//exercicio 4
int maiorValor(int num1, int num2){
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;
    //num1 > num2 ? (return num1) : (return num2); ver como fazer isso
    if (num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

//exercicio 5
void vetores(int vetor[]){
    std::cout << "Valores do vetor: ";
    for (int i = 0; i < 5; i++){
        std::cout << vetor[i] << " | ";
    }
    std::cout << std::endl;
}

//exercicio 6
int mediaVetor(int vetor[], int tamanho){
    int soma = 0;
    float media;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> tamanho;
    vetor[tamanho];
    for(int i = 0; i < tamanho; i++){
        std::cout << "Digite o elemento " << i+1 << " do vetor: ";
        std::cin >> vetor[i];
        soma += vetor[i];
    }
    std::cout << std::endl;
    media = soma / tamanho;
    return media;
}

//exercicio 7
int numPares(int vetor[], int tamanho){
    int pares = 0;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> tamanho;
    vetor[tamanho];
    for(int i = 0; i < tamanho; i++){
        std::cout << "Digite o elemento " << i+1 << " do vetor: ";
        std::cin >> vetor[i];
        if(vetor[i] % 2 == 0){
            pares++;
        }
    }
    return pares;
}

//exercicio 8
void variavelDobro(int num){
    std::cout << "Digite um numero: ";
    std::cin >> num;
    std::cout << "O numero e " << num << " e o dobro do seu valor e " << num*2 << std::endl;
}

//exercicio 9
void matrizes(int matriz[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << "Digite o elemento da linha " << i+1 << " e da coluna " << j+1 << " da matriz: ";
            std::cin >> matriz[i][j];
        }
    }

    std::cout << "Imprimindo a matriz: ";
    std::cout << "____________\n";

    for(int i = 0; i < 3; i++){
        std::cout << " | ";
        for(int j = 0; j < 3; j++){
            std::cout << matriz[i][j] << " | ";
        }
        std::cout << "\n";
        std::cout << "____________\n";
    }
}

int main(){

    int dobro;
    int num1;
    int num2;
    int vetor[5];
    int tamanho = 0;
    int vetorDois[tamanho];
    int matriz[3][3];

    std::cout << "Exercicio 1\n";

    mensagem();

    std::cout << "\nExercicio 2\n";

    std::cout << "Digite um numero: ";
    std::cin >> dobro;
    std::cout << valorDobro(dobro);

    std::cout << "\n\nExercicio 3\n";

    somaSubtracao(num1, num2);

    std::cout << "\nExercicio 4\n";

    std::cout << maiorValor(num1, num2) << "e o maior valor";

    std::cout << "\n\nExercicio 5\n";

    for (int i = 0; i < 5; i++){
        std::cout << "Digite o elemento " << i+1 << " do vetor: ";
        std::cin >> vetor[i];
    }

    vetores(vetor);

    std::cout << "\n\nExercicio 6\n";

    std::cout << mediaVetor(vetorDois, tamanho);

    std::cout << "\n\nExercicio 7\n";

    std::cout << numPares(vetorDois, tamanho) << " numeros pares.";

    std::cout << "\n\nExercicio 8\n";

    variavelDobro(dobro);

    std::cout << "\n\nExercicio 9\n";

    matrizes(matriz);

    return 0;
}