#include <iostream>
// using namespace std; //é pra retirar o prefixo std::

/*exercicio 1
criar um programa que leia dois numeros e mostre:
soma, subtracao, multiplicacao, divisao

exercicio 2
criar um programa que leia a idade de uma pessoa e indique se:
e maior de idade ou e menor de idade

exercicio 3
criar um programa que leia um numero e indique se e:
positivo, negativo, zero

exercicio 4
criar um programa que leia tres numeros e mostre qual e o maior*/

int main()
{

    int numeroUm;
    int numeroDois;
    char calculo{};
    int idade;
    int numero;
    int numeros[3];
    int maior = 0;
    char outraOperacao{};

    std::cout <<"Bem vinda ao exercicio 1!\n";

    do{
        std::cout << "Digite o primeiro numero: ";
        std::cin >> numeroUm;
        std::cout << "Digite o segundo numero: ";
        std::cin >> numeroDois;
        std::cout << "Digite a operacao que voce quer realizar, pelos simbolos: + (adicao), - (subtracao), * (multiplicacao), / (divisao): ";
        std::cin >> calculo;

        //adicionar a opção 5 pra caso a pessoa não queira sair

        switch (calculo){
        case '+':
            std::cout <<"A soma dos numeros e de " <<numeroUm + numeroDois;
            break;
        case '-':
            std::cout <<"A subtracao dos numeros e de " << numeroUm - numeroDois;
            break;
        case '*':
            std::cout <<"A multiplicacao dos numeros e de " << numeroUm * numeroDois;
            break;
        case '/':
            std::cout <<"A divisao dos numeros e de " << numeroUm / numeroDois;
            break;
        default:
            std::cout << "Opcao invalida!";
        }

        std::cout <<"\nSe voce quiser realizar outro calculo digite y, caso nao queira digite qualquer letra! ";
        std::cin >>outraOperacao;

    }while(outraOperacao == 'y');

    std::cout << "\nBem vinda ao exercicio 2!\n";

    std::cout << "Digite a sua idade: ";
    std::cin >> idade;

    if (idade < 18){
        std::cout << "Voce e menor de idade";
    }
    else{
        std::cout << "Voce e maior de idade";
    }

    std::cout << "\n\nBem vinda ao exercicio 3!\n";

    std::cout << "Digite um numero: ";
    std::cin >> numero;

    if (numero > 0){
        std::cout << "O numero digitado e positivo";
    }
    else if (numero < 0){
        std::cout << "O numero digitado e positivo";
    }
    else{
        std::cout << "O numero digitado foi zero";
    }

    std::cout << "\n\nBem vinda ao exercicio 4!\n";

    for (int i = 0; i < 3; i++){
        std::cout << "Digite o numero " << i + 1 << ": ";
        std::cin >> numeros[i];

        if (numeros[i] > maior){
            maior = numeros[i];
        }
    }

    std::cout << "O maior numero digitado foi o " << maior;
    std::cout <<"\n\nObrigada por estar comigo nesta jornada, see u!";

    return 0;
}