#include <iostream>

/*1 - Pedir o nome completo do utilizador com
getline(), apresentar o número de caracteres e
mostrar o primeiro e último carácter.
2 - Pedir uma frase e verificar se contém a palavra
"C++" usando find(). Se encontrar, indicar a
posição onde começa.
3 - Partir de uma frase e usar pelo menos duas
operações entre append(), insert(), replace() ou
erase() para a modificar.
4 - Pedir ao utilizador:
nome;
idade;
cidade.
Guardar os dados num ficheiro dados.txt usando
ofstream.
5 - Abrir dados.txt com ifstream, validar se abriu
corretamente e apresentar todo o conteúdo no
ecrã.
6 - Criar um programa que peça uma mensagem
ao utilizador e a acrescente a log.txt usando
ios::app. Executar várias vezes e confirmar que os
dados anteriores permanecem.
7 - Criar duas funções:
void guardarAluno(ofstream &f, string nome, int
nota);
bool lerAluno(ifstream &f, string &nome, int &nota);
Guardar vários alunos num ficheiro e depois lê-los
novamente.
8 - Criar um programa com:
1 - Adicionar aluno
2 - Mostrar alunos
3 - Procurar aluno
0 - Sair
Cada aluno tem nome e nota. Os dados devem
ficar guardados num ficheiro. A pesquisa deve
usar strings e a leitura/escrita deve estar separada
em funções.*/

int main(){

    std::cout << "Bem vinda ao exercicio 1!\n";

    std::cout << "Digite o seu nome completo: ";
    std::string nomeCompleto;
    getline(std::cin, nomeCompleto);

    std::cout << "O seu nome completo e " << nomeCompleto << "\n";

    std::cout << "O numero de caracteres e de " << nomeCompleto.length() << "\n";

    char primeiro = nomeCompleto[0];
    char ultimo = nomeCompleto[17];

    std::cout << "O primeiro caracter e "<< primeiro << " e o ultimo e " << ultimo << "\n";

    return 0;
}