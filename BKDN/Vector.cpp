#include<iostream>
#include"Vector.h"
#include"Matrix.h"
using namespace std;
Vector::Vector(int n,int m){
        this->n=n;
        //xin mot mang moi
        this->p=new int[n+1];
        for(int i=0;i<this->n;i++){
            *(this->p+i)=m;
        }
}

Vector::Vector(const Vector& vec1){
    this->n=vec1.n;
    this->p=new int[n+1];
    for(int i=0;i<n;i++){
        *(this->p+i)=*(vec1.p+i);
    }
}

void Vector::Show(){
    for(int i=0;i<this->n;i++){
        cout<<*(this->p+i)<<" ";
    }
    cout<<endl;
}

Vector::~Vector(){
    delete[] this-> p;
}
Vector Vector::mulMatrix(Matrix mat){
    Vector v;
    v.n=mat.c;
    for(int i=0;i<mat.c;i++){
        *(v.p+i)=0;
        for(int j=0;j<mat.r;j++){
            *(v.p+i)=*(v.p+i)+*(this->p+j)**(*(mat.p+j)+i);
        }
    }
    return v;
}
