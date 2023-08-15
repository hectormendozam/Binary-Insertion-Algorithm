#include <iostream>
using namespace std;


void imprimeArreglo(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i];
        if (i < n - 1)
            cout << "\t";
    }
    cout << endl;
}

void insercionBinaria(int A[], int n) {
    int aux, izq, der, m;
    for (int i = 1; i <= n - 1; i++) {
        aux = A[i];
        izq = 0;
        der = i;
        while (izq < der)
        {
            m = ((izq + der) / 2);
            if (A[m] <= aux)
            {
                izq = izq + 1;
            }
            else
            {
                der = m;
            }
        }
        for (int j = i; j >= der + 1; j--)
        {
            A[j] = A[j - 1];
            imprimeArreglo(A, n);
        }
        A[der] = aux;
    }
}

int main() {
    cout << "----- Algoritmo Insercion Binaria -----\n" << endl;

    int N = 7;
    int Arr[] = { 6, 9, 12, 67, 3, 0, 2 };

    cout << "Arreglo original\n";
    imprimeArreglo(Arr, N);

    cout << "\nOrdenando...\n";
    insercionBinaria(Arr, N);

    cout << "Arreglo ordenado...\n";
    imprimeArreglo(Arr, N);

    return 0;
}
