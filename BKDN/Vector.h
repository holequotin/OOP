#pragma once
class Matrix;
class Vector
{
private:
    int *p;
    int n;

public:
    //doi so mac dinh dung o day la du
    Vector(int n = 2, int m = 3);
    Vector(const Vector &);
    ~Vector();
    void Show();
    Vector mulMatrix(const Matrix);
};
