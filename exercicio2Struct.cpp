#include <iostream>

/*Exercício 2 – Crie um programa que utilize a struct
Aluno.
O programa deve:
- criar um vetor para 3 alunos
- ler os dados de cada aluno
- mostrar os dados de todos os alunos*/

struct aluno {
    std::string nome = "";
    int idade;
    int nota;
};

int main(){
    aluno aluno[3];

    for(int i = 0; i < 3; i++){
        std::cout << "Digite o nome do aluno: ";
        std::cin >> aluno[i].nome;
        std::cout << "Digite a idade do aluno: ";
        std::cin >> aluno[i].idade;
        std::cout << "Digite a nota do aluno: ";
        std::cin >> aluno[i].nota;
    }

    for(int i = 0; i < 3; i++){
        std::cout << "Aluno " << i+1 << ": ";
        std::cout << aluno[i].nome << " | ";
        std::cout << aluno[i].idade << " | ";
        std::cout << aluno[i].nota << "\n";
    }

    return 0;
}