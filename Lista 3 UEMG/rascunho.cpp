#include <iostream>
#include <locale>

using namespace std;

void operation(int a, int b, char sim) {
    switch (sim) {
        case '+':
            cout << "Resultado: " << (a + b) << endl;
            break;
        case '-':
            cout << "Resultado: " << (a - b) << endl;
            break;
        case '*':
            cout << "Resultado: " << (a * b) << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "Resultado: " << (a / b) << endl;
            } else {
                cout << "Erro: Divisão por zero!" << endl;
            }
            break;
        default:
            cout << "Símbolo inválido!" << endl;
            break;
    }
}

int main() {
    int a, b;
    char sim;
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite dois números e um símbolo válido + - / *\n";
    cin >> a >> b >> sim; // Corrigido para usar '>>' para cada variável
    operation(a, b, sim);
    return 0;
}