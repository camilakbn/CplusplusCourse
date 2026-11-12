#include <iostream>

/*Exercício 3 – Crie um programa com uma struct
Aluno.
O programa deve:
- ler os dados de 5 alunos
- Calcular e mostrar a média das notas
Exercício 4 – Crie um programa que:
- Leia os dados de 5 alunos
- determine qual é o aluno com a melhor nota
- mostre o nome e a nota desse aluno
Exercício 5 – Crie um programa que:
- leia os dados de 5 alunos
- considere que a nota mínima para aprovação é
10
- indique quantos alunos estão aprovados*/

struct aluno {
    std::string nome = "";
    int idade;
    int nota;
};

int main(){
    aluno aluno[5];
    int soma = 0;
    float media;
    int melhorNota = 0;
    std::string alunoMelhor = "";
    int aprovados = 0;

    for(int i = 0; i < 5; i++){
        std::cout << "Digite o nome do aluno: ";
        std::cin >> aluno[i].nome;
        std::cout << "Digite a idade do aluno: ";
        std::cin >> aluno[i].idade;
        std::cout << "Digite a nota do aluno: ";
        std::cin >> aluno[i].nota;
        soma = soma + aluno[i].nota;
    }

    media = soma / 5;

    for(int i = 0; i < 5; i++){
        std::cout << "Aluno " << i+1 << ": ";
        std::cout << aluno[i].nome << " | ";
        std::cout << aluno[i].idade << " | ";
        std::cout << aluno[i].nota << "\n";
        if(aluno[i].nota > melhorNota){
            melhorNota = aluno[i].nota;
            alunoMelhor = aluno[i].nome;
        }
        if (aluno[i].nota >= 10){
            aprovados++;
        }
    }

    std::cout << "A media das notas e de " << media << "\n";
    std::cout << "O aluno com a melhor nota foi " <<alunoMelhor << " e a nota dele e " << melhorNota << "\n";
    std::cout << aprovados << " alunos foram aprovados!";

    return 0;
}