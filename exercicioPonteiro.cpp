#include <iostream>
/*Exercício 1
Cria uma variável int numero = 10 e um ponteiro que
aponte para ela. Mostra:
• o valor de numero;
• o endereço de numero;
• o valor guardado no ponteiro;
• o valor obtido através de *ponteiro.

Exercício 2
Cria:
int pontos = 20;
int *p = &pontos;
Usa apenas o ponteiro para alterar pontos para 50.

Exercício 3
int x = 5;
int *p = &x;
*p = 12;
cout << x;

Exercício 4
int *p = NULL;
cout << *p;
Explica qual é o problema.
Explicação: o valor de *c não tem outra variável pra alimentar ele, então o sistema não funciona

Exercício 5
int valores[] = {4, 8, 12};
int *p = valores;
Mostra o primeiro elemento usando apenas p.

Exercício 6
Usando o mesmo array, mostra:
4
8
12
sem utilizar valores[0], valores[1] ou valores[2].

Exercício 7
Cria:
int notas[] = {12, 15, 18, 10, 16};
Percorre o array com um ponteiro e calcula a soma.

Exercício 8 — Um pouco mais difícil
Com o mesmo array, encontra o maior valor utilizando
ponteiros.
Este último é bom para perceberes se realmente entendeste
ponteiros e não apenas a sintaxe.*/

int main()
{

    int numero = 10;
    int *p = &numero;

    std::cout << "Bem vinda ao exercicio 1!\n";

    std::cout << "Valor de numero: " << numero << "\n";
    std::cout << "Endereço de numero: " << &numero << "\n";
    std::cout << "Valor guardado no ponteiro: " << p << "\n";
    std::cout << "Valor obtido atraves de *ponteiro: " << *p << "\n";

    std::cout << "\nBem vinda ao exercicio 2! \n";

    int pontos = 10;
    int *q = &pontos;
    *q = 50;
    std::cout << *q << "\n";

    std::cout << "\nBem vinda ao exercicio 3! \n";

    int x = 5;
    int *b = &x;
    *b = 12;
    std::cout << x << "\n";

    std::cout << "\nBem vinda ao exercicio 4! \n";

    int var = 10;

    int *c = &var;
    *c = NULL;
    std::cout << *c << "\n";
    std::cout << "Explicacao: o valor de *c nao tem outra variavel pra alimentar ele, entao o sistema nao funciona\n";

    std::cout << "\nBem vinda ao exercicio 5! \n";

    int valores[] = {4, 8, 12};
    int *d = valores;
    std::cout << *d << "\n";

    std::cout << "\nBem vinda ao exercicio 6! \n";

    std::cout << *d << "\n";
    std::cout << *(d + 1) << "\n";
    std::cout << *(d + 2) << "\n";

    std::cout << "\nOutra forma de fazer o exercicio 6! \n";

    for(int *i = valores; i != valores + 3; i++){
        std::cout << *i << "\n";
    }

    std::cout << "\nBem vinda ao exercicio 7! \n";

    int notas[] = {12, 15, 18, 10, 16};
    int soma = 0;
    int maiorValor = 0;
    
    for(int *i = notas; i != notas + 5; i++){
        soma = soma + *i;
        if(*i > maiorValor){
            maiorValor = *i;
        }
    }

    std::cout << "A soma dos itens do array e de " << soma << "\n";
    std::cout << "O maior valor existente no array e " << maiorValor;

    return 0;
}