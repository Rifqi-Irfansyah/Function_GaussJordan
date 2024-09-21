#include <iostream>
#include "matriks-eselon.h"
#include "invers-matriks.h"

using namespace std;
int main(){
    int kolom, baris, opsi;
    float matriksA[100][100];

    cout << "Opsi" << endl;
    cout << "1. Gauss Jordan" << endl;
    cout << "2. Invers Matriks" << endl;
    cout << "opsi: ";
    cin >> opsi;

    // NO HARDCODE
    assignMatriks(kolom, baris, matriksA);
    menampilkanMatriks(" Struktur Matriks", kolom, baris, matriksA);

    if (opsi == 1) {
        gaussJordan(kolom, baris, matriksA);
        solusi(kolom, baris, matriksA);
    } else if (opsi == 2) {
        inversMatriks(kolom, baris, matriksA);
        menampilkanMatriks(" Invers Matriks", kolom, baris, matriksA);
    } else {
        cout << "Pilih salah satu opsi diatas! \n";
    }
    return 0;
}
