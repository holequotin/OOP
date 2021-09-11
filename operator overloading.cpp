#include<iostream>

using namespace std;
struct  Point3D{
    float x;
    float y;
    float z;
};
typedef Point3D point;
//operator overloading
//các argument toàn là các địa chỉ bởi vì hàm này là thay đổi giá trị của argument
istream & operator >> (istream &din,point &p1){
    cout<<"Nhap cac toa do x,y,z:";
    din>>p1.x>>p1.y>>p1.z;
    return(din);
};
ostream &operator << (ostream &dout,point p1){
    dout<<p1.x<<" "<<p1.y<<" "<<p1.z<<endl;
    return (dout);
}
int main() {
point p;
cin>>p;
cout<<p;
    return 0;
}
