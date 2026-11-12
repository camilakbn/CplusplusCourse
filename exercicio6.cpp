#include <iostream>
/*crie um programa que peça ao utilizador para introduzir um numero inteiro positivo
o programa deve mostrar no ecrã todos os numeros de 1 até o numero introduzido
*/

int main(){

    int numero;
        
    do{
        std::cout<<"Digite um numero inteiro positivo: ";
        std::cin >>numero;
    }while(numero < 0);

    for(int i = 0; i <= numero; i++){
        std::cout <<i<<"\n";
    }

    return 0;
}