
#include<iostream>
#include"Vector.h"
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
