#include "invers-matriks.h"

void inversMatriks(int kolom, int baris, float matriks[100][100])
{
    if (baris != kolom)
    {
        cout << "invers tidak bisa dilaukan karena jumlah kolom tidak sama dengan jumlah baris" << endl;
    }
    else
    {
        float invers[100][100];

        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                invers[i][j] = matriks[i][j];
                if (i == j)
                {
                    invers[i][j + kolom] = 1;
                }
                else
                {
                    invers[i][j + kolom] = 0;
                }
            }
        }
        
        gaussJordan(baris*2, kolom, invers);

        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                matriks[i][j] = invers[i][j+baris];
            }
        }
    }
}