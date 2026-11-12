#include <iostream>
/*crie um programa que peça ao utilizador para introduzir 5 numeros inteiros
o programa deve calcular e mostrar a soma total dos numeros introduzidos*/

int main(){

    int numeros[5];
    int soma = 0;

    for(int i = 0; i < 5; i ++){
        std::cout <<"Digite o numero "<<i+1<<": ";
        std::cin >>numeros[i];
        soma = soma + numeros[i];
    }

    std::cout <<"A soma total dos numeros foi de "<<soma;

    return 0;
}