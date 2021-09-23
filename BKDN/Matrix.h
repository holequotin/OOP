
#pragma once
#include"Vector.h"

class Matrix
{
private:
    int **p;
    int r;
    int c;

public:
    Matrix(int r = 2, int c = 2, int x = 2);
    Matrix(const Matrix &);
    ~Matrix();
    void Show();
    friend Vector Vector :: mulMatrix(Matrix);
};
