#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int numeros[30];
    int contagem[30];
    int nrepetidos[30];
    int repeticao[30];
    int menos2[30];
    
    // Zerando o array contagem
    for(int h = 0; h <= 29; h++) {
        contagem[h] = 0;
        nrepetidos[h] = 0;
        repeticao[h] = 0;
        menos2[h] = 0;
    }

    // Input dos números
    for(int n = 0; n <= 29; n++) {
        printf("Digite um numero \n");
        scanf("%d", &numeros[n]);
    }

    // Contando repetições
    for(int i = 0; i <= 29; i++) {
        for(int j = 0; j <= 29; j++) {
            if(numeros[i] == numeros[j]) {
                contagem[i] = contagem[i] + 1;
            }
        }
    }

    int maior = 0, menor = contagem[0];
    for(int u = 0; u <= 29; u++) {
        if(contagem[u] > contagem[maior]) {
            maior = u;
        }
        if(contagem[u] < contagem[menor]) {
            menor = u;
        }
    }
    cout << "O numero que mais repetiu foi" << numeros[maior] <<"\n";
    cout << "O numero que menos repetiu foi" << numeros[menor]<< "\n";

    // Preenchendo nrepetidos com números únicos
    int b = 0;
    for(int q = 0; q <= 29; q++) {
        bool jaExiste = false;
        for(int k = 0; k < b; k++) {
            if(numeros[q] == nrepetidos[k]) {
                jaExiste = true;
                break;
            }
        }
        if(!jaExiste) {
            nrepetidos[b] = numeros[q];
            b++;
        }
    }

    // Calculando repetições dos números únicos
    for(int v = 0; v < b; v++) {
        repeticao[v] = 0;
        for(int w = 0; w < 30; w++) {
            if(nrepetidos[v] == numeros[w]) {
                repeticao[v]++;
            }
        }
    }

    // Mostrando números que aparecem mais de 2 vezes
    cout << "Numeros que apareceram mais de duas vezes \n";
    for(int v = 0; v < b; v++) {
        if(repeticao[v] > 2) {
            cout << nrepetidos[v] << "\n";
        } else {
            menos2[v] = nrepetidos[v];
        }
    }
    cout << "Numero que repetiu duas vezes \n";
    for(int v = 0; v < b; v++) {
        if(repeticao[v] == 2) {
            //cout << "Numero que repetiu duas vezes \n";
            cout << nrepetidos[v] << "\n";
        } else {
            menos2[v] = nrepetidos[v];
        }
    }


    // Ordenando os números únicos em ordem crescente (Bubble Sort)
    for(int t = 0; t < b - 1; t++) {
        for(int y = 0; y < b - t - 1; y++) {
            if(nrepetidos[y] > nrepetidos[y + 1]) {
                int aux = nrepetidos[y];
                nrepetidos[y] = nrepetidos[y + 1];
                nrepetidos[y + 1] = aux;
            }
        }
    }

    // Mostrando lista em ordem crescente
    cout << "Lista crescente: \n";
    for(int t = 0; t < b; t++) {
        cout << nrepetidos[t] << "\n";
    }

    return 0;
}
