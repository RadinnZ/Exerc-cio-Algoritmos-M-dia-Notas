#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {
    string nomes[5];
    float  notas[5][3];
    float  medias[5];
    int    qtd;

    cout << "Quantos alunos? (max 5): ";
    cin  >> qtd;

    if (qtd > 5) qtd = 5;

    cin.ignore();

    int i = 0;
    while (i < qtd) {
        cout << "\n Digite o nome do aluno " << (i + 1) << ": ";
        getline(cin, nomes[i]);

        cout << "Digite as 3 notas de " << nomes[i] << ": ";
        cin  >> notas[i][0] >> notas[i][1] >> notas[i][2];
        cin.ignore();

        medias[i] = calcularMedia(notas[i][0], notas[i][1], notas[i][2]);

        i++;
    }

    cout << "\n";
    cout << left  << setw(12) << "ALUNO"
         << right << setw(6)  << "N1"
                  << setw(6)  << "N2"
                  << setw(6)  << "N3"
                  << setw(8)  << "MEDIA"
                  << setw(12) << "SITUACAO"
         << "\n";

    int j = 0;
    while (j < qtd) {
        string situacao;
        if (medias[j] >= 7.0) {
            situacao = "Aprovado";
        } else {
            situacao = "Reprovado";
        }

        cout << fixed << setprecision(1);
        cout << left  << setw(12) << nomes[j]
             << right << setw(6)  << notas[j][0]
                      << setw(6)  << notas[j][1]
                      << setw(6)  << notas[j][2]
                      << setw(8)  << medias[j]
                      << setw(12) << situacao
             << "\n";

        j++;
    }

    int indiceMaior = 0;
    int k = 1;
    while (k < qtd) {
        if (medias[k] > medias[indiceMaior]) {
            indiceMaior = k;
        }
        k++;
    }

    cout << "\n Aluno com maior media: "
         << nomes[indiceMaior]
         << " (" << medias[indiceMaior] << ")\n";

    return 0;
}
