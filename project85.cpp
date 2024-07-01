//insertion operator overloading:-

#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;
    public:
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    // friend ostream& operator<<(ostream &out,Complex &c);
    friend void operator<<(ostream &out,Complex &c);
};

/*ostream&*/ void operator<<(ostream &out,Complex &c){
    out<<c.real<<"+i"<<c.img<<endl;
    // return out;
}

int main(){
    Complex c(10,5);
    cout<<c;
    operator<<(cout,c);      //operator<<  is a function name which is taking cout & c as parameter.
    return 0;
}