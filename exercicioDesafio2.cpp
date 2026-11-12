#include <iostream>

int main() {
    int n;
    int valor = 0;

    std::cout << "Insira a quantidade de numeros do seu vetor: ";
    std::cin >> n;

    int vetor[n];

    for (int i = 0; i < n; i++){
        std::cout << "Insira o elemento " << i + 1 << " do seu vetor: ";
        std::cin >> vetor[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vetor[i] > vetor[j]) {
                valor = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = valor;
            }
        }
    }

    for (int i = 0; i < n; i++){
        std::cout << vetor[i] << " | ";
    }

    return 0;
}