#include <iostream>
#include "Matrix.h"

using namespace std;

Matrix::Matrix(int r, int c, int x)
{
    this->r = r;
    this->c = c;
    this->p = new int *[r];
    for (int i = 0; i < r; i++)
    {
        *(this->p + i) = new int[c];
        for (int j = 0; j < c; j++)
        {
            *(*(this->p + i) + j) = x;
        }
    }
}

Matrix::Matrix(const Matrix &mat1)
{
    this->r = mat1.r;
    this->c = mat1.c;
    this->p = new int *[r];
    for (int i = 0; i < r; i++)
    {
        *(this->p + i) = new int[c];
        for (int j = 0; j < c; j++)
        {
            *(*(this->p + i) + j) = *(*(mat1.p + i) + j);
        }
    }
}

Matrix::~Matrix()
{
    for (int i = 0; i < r; i++)
    {
        delete[](this->p + i);
    }
    delete[] p;
}

void Matrix::Show()
{
    for (int i = 0; i < this->r; i++)
    {
        for (int j = 0; j < this->c; j++)
        {
            cout << *(*(this->p + i) + j) << " ";
        }
        cout << endl;
    }
}
