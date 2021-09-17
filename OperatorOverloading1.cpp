#include <iostream>

using namespace std;
class Number
{
private:
    float Data;

public:
    //khai báo mặc định
    Number(float F = 0.0) { Data = F; }
    //chuyển kiểu sang float
    operator float() { return Data; }
    //chuyển kiểu sang kiểu int
    operator int() { return (int)Data; }
    //định nghĩa toán tử ++a,đây là hàm tham chiếu dùng chung vùng nhớ với thằng mà gọi nó
    Number &operator++()
    {
        //this là một con trỏ
        this->Data = this->Data + 1;
        //vì đây là con trỏ nên phải return *this
        return *this;
    }
    //toán tử a++, tại sao thằng này lại truyền tham trị
    const Number operator++(int)
    {
        Number *before = this;
        this->Data++;
        return *before;
    }
    //khai báo hàm friend
    friend istream &operator>>(istream &din, Number &N);
    //hàm xuất thì tham chiếu/tham trị truyền vào nên là const
    friend ostream &operator<<(ostream &dout, const Number &N);
};
//định nghĩa các hàm nhập xuất
istream &operator>>(istream &din, Number &N)
{
    din >> N.Data;
    return (din);
}

ostream &operator<<(ostream &dout, const Number &N)
{
    dout << N.Data;
    return (dout);
}
int main()
{
    Number N1, N2;
    cin >> N1;
    cout << ++N1 << endl;
    cout << N1++;
    return 0;
}
