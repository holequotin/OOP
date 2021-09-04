#include<iostream>

using namespace std;
class Box{
    private:
    long long l;
    long long b;
    long long h;
    public:
    //======Constructor========
    Box(){
		l=0;
		b=0;
		h=0;
	};
    Box(int length,int breadth,int height){
        l=length;
        b=breadth;
        h=height;
    }
    Box(Box &B){
        l=B.l;
        b=B.b;
        h=B.h;
    }
    //======Method=========
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        return l*b*h;
    }
    //Overload operator < as specified
    bool operator<(Box B){
        if((l<B.l)||(b<B.b&&l==B.l)||(h<B.h&&b==B.b&&l==B.l)) return true;
        return false;
    }
    //Overload operator << as specified,using friend function
	//use friend function to call any where
    friend ostream& operator<<(ostream& dout,Box &B){
        dout<<B.l<<" "<<B.b<<" "<<B.h;
        return (dout) ;
    }
};

//menu
void check2()
{
	int n;//number of test case
	cin>>n;
	Box temp;//object,constructor (0,0,0);
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<(long long)temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}
//update with github
int main()
{
	check2();
}
