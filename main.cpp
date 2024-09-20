#include <iostream>
#include "matriks-eselon.h"

using namespace std;
int main(){
    int kolom, baris;
    float matriksA[100][100];

    //HARDCODE
    kolom = 5;
    baris =4;

    // matriksA[0][0] = 1;
    // matriksA[0][1] = -1;
    // matriksA[0][2] = 2;
    // matriksA[0][3] = -1;
    // matriksA[0][4] = -1;

    // matriksA[1][0] = 2;
    // matriksA[1][1] = 1;
    // matriksA[1][2] = -2;
    // matriksA[1][3] = -2;
    // matriksA[1][4] = -2;


    // matriksA[2][0] = -1;
    // matriksA[2][1] = 2;
    // matriksA[2][2] = -4;
    // matriksA[2][3] = 1;
    // matriksA[2][4] = 1;

    // matriksA[3][0] = 3;
    // matriksA[3][1] = 0;
    // matriksA[3][2] = 0;
    // matriksA[3][3] = -3;
    // matriksA[3][4] = -3;

    // NO HARDCODE
    assignMatriks(kolom, baris, matriksA);
    menampilkanMatriks(" Struktur Matriks", kolom, baris, matriksA);
    gaussJordan(kolom, baris, matriksA);
    solusi(kolom, baris, matriksA);
    return 0;
}
