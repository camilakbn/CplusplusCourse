#include <iostream>
/*crie um programa que peça ao utilizador para introduzir um numero inteiro
o programa deve apresentar a tabuada desse numero de 1 a 10*/

int main(){

    int numero;

    do{
        std::cout <<"Digite um numero inteiro maior que zero: ";
        std::cin >>numero;
    }while(numero < 1);

    for(int i = 0; i <= 10; i++){
        std::cout <<numero<<" x "<<i<<" = "<<numero*i<<"\n";
    }

    return 0;
}