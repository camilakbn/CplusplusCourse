#include <iostream>
/*crie um programa que apresente um menu de opcoes ao utilizador
o programa deve mostrar no ecrã o seguinte menu:
1-soma
2-subtracao
3-multiplicacao
4-divisao
o utilizador deve introduzir dois numeros e escolher a opcao do menu correspondente à operação que pretende realizar
o programa deve então:
executar a operação escolhida;
apresentar o resultado da operação;
caso o utilizador introduza uma opção diferente das apresentadas, mostrar a mensagem "opção inválida"*/

int main()
{

    int numeroCalculo;
    int numeroUm;
    int numeroDois;
    char outraOperacao{};


    do{
        std::cout << "Ola, tudo bem?\nEste e um programa para voce realizar calculos simples entre dois numeros.\nDigite o primeiro numero: ";
        std::cin >> numeroUm;
        std::cout << "Agora digite o segundo numero: ";
        std::cin >> numeroDois;
        std::cout << "Voce pode escolher entre as seguintes opcoes:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nBasta digitar o numero correspondente ao calculo que voce quer fazer: ";
        //adicionar opção 5 pra caso a pessoa queira sair
        std::cin >> numeroCalculo;

        switch (numeroCalculo){
        case 1:
            std::cout << "A soma dos numeros e de " << numeroUm + numeroDois;
            break;
        case 2:
            std::cout << "A subtracao dos numeros e de " << numeroUm - numeroDois;
            break;
        case 3:
            std::cout << "A multiplicacao dos numeros e de " << numeroUm * numeroDois;
            break;
        case 4:
            std::cout << "A divisao dos numeros e de " << numeroUm / numeroDois;
            break;
        default:
            std::cout << "Opcao invalida!";
        }

        std::cout << "\nVoce quer realizar outra operacao? Se sim, digite y, caso nao queira digite qualquer letra! ";
        std::cin >> outraOperacao;
    } while (outraOperacao == 'y');

    std::cout << "\nObrigada por utilizar este programa!";

    return 0;
}