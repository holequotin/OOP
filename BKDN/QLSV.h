#include"SV.h"

class QLSV{
    private:
    SV *p;
    int _length;
    public:
    QLSV();
    ~QLSV();
    int Length();
    void Length(int);
    void Add(SV);
    void Insert(SV,int);
    void Show();
    void Update(int);
    int IndexOf(SV);
    void Delete(SV);
};