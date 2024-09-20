
#include "matriks-eselon.h"

using namespace std;

int menampilkanMatriks(const char *nama_matriks, int kolom, int baris, float matriks[100][100]){
    cout << nama_matriks << endl;
    cout << " " << static_cast<char>(218) << static_cast<char>(196);
    for (int i = 0; i <= kolom; i++)
    {
        cout << "\t";
    }
    cout << static_cast<char>(196) << static_cast<char>(191) << endl;

    for (int i = 0; i < baris; i++)
    {
        cout << " " << static_cast<char>(179);
        for (int j = 0; j < kolom; j++)
        {
            cout << "\t" << matriks[i][j];
        }
        cout << "\t " << static_cast<char>(179) << endl;
    }

    cout << " " << static_cast<char>(192) << static_cast<char>(196);
    for (int i = 0; i <= kolom; i++)
    {
        cout << "\t";
    }
    cout << static_cast<char>(196) << static_cast<char>(217) << endl;

    return 0;
}

int menampilkanStrukturMatriks(const char *nama_matriks, int kolom, int baris)
{
    cout << nama_matriks << endl;
    cout << " " << static_cast<char>(218) << static_cast<char>(196);
    for (int i = 0; i <= kolom; i++)
    {
        cout << "\t";
    }
    cout << static_cast<char>(196) << static_cast<char>(191) << endl;

    for (int i = 1; i <= baris; i++)
    {
        cout << " " << static_cast<char>(179);
        for (int j = 1; j <= kolom; j++)
        {
            cout << "\t(" << i << "," << j  << ")";
        }
        cout << "\t " << static_cast<char>(179) << endl;
    }

    cout << " " << static_cast<char>(192) << static_cast<char>(196);
    for (int i = 0; i <= kolom; i++)
    {
        cout << "\t";
    }
    cout << static_cast<char>(196) << static_cast<char>(217) << endl;
}


int assignMatriks(int &kolomA, int &barisA, float matriksA[100][100]){

    cout << static_cast<char>(201);
    for (int i = 1; i <= 40; i++)
    {
        cout << static_cast<char>(205);
    }
    cout << static_cast<char>(187) << endl;
    cout << static_cast<char>(186) << "           Perkalian 2 Matriks          " << static_cast<char>(186) << endl;
    cout << static_cast<char>(200);
    for (int i = 1; i <= 40; i++)
        cout << static_cast<char>(205);
    cout << static_cast<char>(188) << endl;


    // assign matriks A
    cout << "\n Matriks A :" << endl;
    cout << " Masukkan jumlah kolom = ";
    cin >> kolomA;
    cout << " Masukkan jumlah baris = ";
    cin >> barisA;
    menampilkanStrukturMatriks(" Struktur Matriks A :", kolomA, barisA);

    for (int i = 1; i <= barisA; i++)
    {
        for (int j = 1; j <= kolomA; j++)
        {
            cout << " Masukkan angka pada elemen (" << i << "," << j << ") = ";
            cin >> matriksA[i - 1][j - 1];
        }
    }

    cout << endl;
    menampilkanMatriks(" Tampilan Matriks A :", kolomA, barisA, matriksA);
}



void gaussJordan(int kolom, int baris, float matriks[100][100]) {
    for (int i = 0; i < baris; i++) {
        float pivot = matriks[i][i];
        if (pivot != 0) {
            for (int j = 0; j < kolom; j++) {
                matriks[i][j] /= pivot;
            }
        }

        // Menghilangkan elemen di atas dan di bawah pivot
        for (int k = 0; k < baris; k++) {
            if (k != i) {
                float faktor = matriks[k][i];
                for (int j = 0; j < kolom; j++) {
                    matriks[k][j] -= faktor * matriks[i][j];
                }
            }
        }
    }
    menampilkanMatriks("Hasilnya : ", kolom, baris, matriks);

}
