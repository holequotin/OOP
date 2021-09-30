#include"SV.h"
#include<iostream>
using namespace std;
SV::SV(int m,string n,double d)
:_MSSV(m),_Name(n),_DTB(d)
{

}
SV::~SV(){};
void SV::Show(){
    cout<<"MSSV = "<<this->_MSSV<<", Name = "<<this->_Name<<", DTB = "<<this->_DTB<<endl;
}