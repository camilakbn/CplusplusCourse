#include <iostream>
/*crie um programa que peça repetidamente ao utilizador para introduzir numeros
o programa deve continuar a pedir numeros ate que o utilizador introduza o numero 0
no final, o programa deve apresentar a soma de todos os numeros introduzidos (exceto o 0)*/

int main(){

    int numero;
    int soma = 0;

    do{
        std::cout <<"Digite um numero: ";
        std::cin >>numero;

        if(numero < 0){
            std::cout<<"Valor nao aceito! Tem que digitar um numero maior que 0!\n";
        }
        else if(numero > 0){
            soma = soma + numero;
        }

    } while(numero != 0);

    std::cout <<"A soma dos numeros foi de "<<soma;

    return 0;
}