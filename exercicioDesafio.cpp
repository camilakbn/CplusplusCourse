#include <iostream>

/*inserir em um vetor de n numeros e mostrar eles ordenados numericamente*/

int main()
{
    int n;
    int valor = 0;

    std::cout << "Insira a quantidade de numeros do seu vetor: ";
    std::cin >> n;

    int vetor[n];

    for (int i = 0; i < n; i++){
        std::cout << "Insira o elemento " << i + 1 << " do seu vetor: ";
        std::cin >> vetor[i];
    }
    
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (vetor[j] > vetor[j + 1]){
                valor = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = valor;
            }
        }
    }

    for (int i = 0; i < n; i++){
        std::cout << vetor[i] << " | ";
    }

    return 0;
}