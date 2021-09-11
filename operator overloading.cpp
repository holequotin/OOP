#include <iostream>
//format code :Shift + Alt +F
using namespace std;
struct Point3D
{
    float x;
    float y;
    float z;
};
typedef Point3D point;
//operator overloading
//các argument toàn là các địa chỉ bởi vì hàm này là thay đổi giá trị của argument
istream &operator>>(istream &din, point &p1)
{
    cout << "Nhap cac toa do x,y,z:";
    din >> p1.x >> p1.y >> p1.z;
    return (din);
};
ostream &operator<<(ostream &dout, point p1)
{
    dout << p1.x << " " << p1.y << " " << p1.z << endl;
    return (dout);
}
point operator+(point p1, point p2)
{
    point p;
    p.x = p1.x + p2.x;
    p.y = p1.y + p2.y;
    p.z = p1.z + p2.z;
    return p;
}
point operator-(point p1, point p2)
{
    point p;
    p.x = p1.x - p2.x;
    p.y = p1.y - p2.y;
    p.z = p1.z - p2.z;
    return p;
}
bool operator==(point p1, point p2)
{
    if (p1.x != p2.x || p1.y != p2.y || p1.z != p2.z)
        return false;
    else
        return true;
}
bool operator!=(point p1, point p2)
{
    if (p1.x != p2.x || p1.y != p2.y || p1.z != p2.z)
        return true;
    else
        return false;
}
int main()
{
    point p1, p2;
    cin >> p1 >> p2;
    cout << p1 + p2;
    cout << p1 - p2;
    if (p1 == p2)
        cout << "2 diem bang nhau";
    else
        cout << "2 diem khac nhau";
    return 0;
}
