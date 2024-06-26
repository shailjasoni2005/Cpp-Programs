// // Operator overloading (+):-

// #include<iostream>
// using namespace std;

// class Complex{
//     private:
//     int real;
//     int img;

//     public:
//     Complex(int r=0,int i=0){
//         real=r;
//         img=i;
//     }

//     Complex operator+(Complex x){
//         Complex temp;

//         //temp real part= real part of c1 + real part of c2;
//         temp.real=real+x.real;
//         //temp img part= img part of c1 + img part of c2;
//         temp.img=img+x.img;
//         return temp;
//     }
// };

// int main(){

//     Complex c1(3,7);
//     Complex c2(5,4);
//     Complex c3;
//     // c3=c1.add(c2);
//     c3=c1.operator+(c2);
//     // c3=c1+c2;
//     return 0;
// }


#include<iostream>
using namespace std;

class Complex{

    public:
    int real;
    int img;
    
    Complex operator+(Complex c){
        Complex temp;

        //temp real part= real part of c1 + real part of c2;
        temp.real=real+c.real;
        //temp img part= img part of c1 + img part of c2;
        temp.img=img+c.img;
        return temp;
    }
};

int main(){

    Complex c1,c2,c3;
    c1.real=5;c1.img=3;
    c2.real=10;c2.img=5;
    c3=c1.operator+(c2);

    cout<<c3.real<<"+i"<<c3.img<<endl;
    return 0;
}