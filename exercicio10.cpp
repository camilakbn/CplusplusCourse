#include <iostream>
/*crie um programa que peça ao utilizador para introduzir um numero inteiro positivo
o programa deve calcular e mostrar o fatorial desse numero
exemplo:
5! = 5 x 4 x 3 x 2 x 1 = 120*/

int main(){

    int numero;
    int fatorial = 1;

    do{
        std::cout <<"Ola!\nNesse programa farei o fatorial do numero que digitares.\nDigite um numero: ";
        std::cin >>numero;
    }while(numero <= 0);

    for(int i = 1; i <= numero; i++){
        fatorial *= i;
    }

    std::cout << "5!";

    for(int i = numero; i >= 1; i--){
        std::cout << " x "<< i;
    }

    std::cout << " = " << fatorial;

    return 0;
}