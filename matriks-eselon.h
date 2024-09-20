#ifndef MATRIKS_H
#define MATRIKS_H

#include <iostream>
#include "matriks-eselon.cpp"

using namespace std;

int assignMatriks(int &kolomA, int &barisA, float matriksA[100][100]);
int gatePerkalian();
int menampilkanMatriks(const char *nama_matriks, int kolom, int baris, float matriks[100][100]);
int menampilkanStrukturMatriks(const char *nama_matriks, int kolom, int baris);
void gaussJordan(int kolom, int baris, float matriks[100][100]);
void solusi(int kolom, int baris, float matriks[100][100]);

#endif