#include <iostream>
#include "matriks-eselon.h"

using namespace std;
int main(){
    int kolom, baris;
    float matriksA[100][100];

    assignMatriks(kolom, baris, matriksA);
    menampilkanMatriks(" Struktur Matriks", kolom, baris, matriksA);
    gaussJordan(kolom, baris, matriksA);
    return 0;
}
