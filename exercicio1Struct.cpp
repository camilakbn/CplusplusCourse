#include <iostream>

/*Exercício 1 - Crie uma struct chamada Aluno com
os seguintes campos:
- nome
- idade
- nota
O programa deve:
- ler os dados de um aluno
- mostrar os dados no ecrã

Exercício 2 – Crie um programa que utilize a struct
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
    aluno aluno;
    
    std::cout << "Digite o nome da aluna: ";
    std::cin >> aluno.nome;
    std::cout << "Digite a idade da aluna: ";
    std::cin >> aluno.idade;
    std::cout << "Digite a nota da aluna: ";
    std::cin >> aluno.nota;

    std::cout << "O nome da aluna e " << aluno.nome << ", a sua idade e " << aluno.idade << ", e a sua nota foi de " << aluno.nota;

    return 0;
}