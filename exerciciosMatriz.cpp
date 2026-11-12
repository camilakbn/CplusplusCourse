#include <iostream>

/*Exercício 1 - Crie um programa que leia
os valores de uma matriz 3×3.
O programa deve:
- pedir ao utilizador para introduzir os
valores da matriz
- mostrar a matriz no ecrã no formato de
tabela
Exercício 2 - Crie um programa que leia
uma matriz 3×3.
O programa deve calcular e mostrar a
soma de todos os valores da matriz.
Exercício 3 - Crie um programa que leia
uma matriz 3×3.
O programa deve determinar e mostrar o
maior valor existente na matriz.
Exercício 4 - Crie um programa que leia
uma matriz 3×3.
O programa deve calcular e mostrar a
soma de cada linha da matriz.
Exercício 5 – Crie um programa que leia
uma matriz 3×3.
O programa deve calcular e mostrar a
soma de cada coluna da matriz.
Exercício 6 – Crie um programa que leia
uma matriz 3×3.
O programa deve mostrar os elementos
da diagonal principal.*/

int main(){

    int matriz[3][3];
    int soma = 0;
    int maiorValor = 0;
    int somaLinha;
    int somaColuna;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << "Digite o elemento da linha " << i+1 << " e da coluna " << j+1 << ": ";
            std::cin >> matriz[i][j];
            soma = soma + matriz[i][j];
            if(matriz[i][j] > maiorValor){
                maiorValor = matriz[i][j];
            }
        }
    }

    std::cout << "Imprimindo a matriz: \n";
    std::cout << "______________";

    for(int i = 0; i < 3; i++){
        std::cout << "\n| ";
        for(int j = 0; j < 3; j++){
            std::cout << matriz[i][j] << " | ";
        }
        std::cout <<"\n";
        std::cout << "______________";
    }

    std::cout << "\nA soma dos valores da matriz e de " << soma;
    std::cout << "\nO maior valor existente na matriz e " << maiorValor << "\n";

    for(int i = 0; i < 3; i++){
        somaLinha = 0;
        for(int j = 0; j < 3; j++){
            somaLinha = somaLinha + matriz[i][j];
        }
        std::cout << "A soma da linha " << i+1 << " e de : " << somaLinha << "\n";
    }

    for(int c = 0; c < 3; c++){
        somaColuna = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(j == c){
                    somaColuna = somaColuna + matriz[i][j]; 
                }
            }
        }
        std::cout << "A soma da coluna " << c+1 << " e de : " << somaColuna << "\n";
    }
    
    std::cout << "Imprimindo a diagonal principal: \n";

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                std::cout << matriz[i][j] << " | ";
            }
        }
    }

    return 0;
}