#include<string>

using namespace std;

class SV{
    private:
    int _MSSV;
    string _Name;
    double _DTB;
    public:
    SV(int = 0,string = "",double = 0.0);
    ~SV();
    void Show();
};