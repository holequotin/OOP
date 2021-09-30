#include"QLSV.h"

int QLSV::Length(){
    return this->_length;
}
void QLSV::Length(int value){
    this->_length=value;
}
QLSV::QLSV(){
    this->p=nullptr;
    this->_length=0;
}
QLSV::~QLSV(){
    delete [] this->p;
}
void QLSV::Add(SV s){

}
void QLSV::Insert(SV s,int index){

}
void QLSV::Show(){

}
void QLSV::Update(int m){

}
int QLSV::IndexOf(SV s){
    int index=-1;

    return index;
}
void QLSV::Delete(SV s){
    int index=IndexOf(s);
    if(index>=0){
        
    }
}
