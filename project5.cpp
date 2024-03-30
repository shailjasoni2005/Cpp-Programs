#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    //constants in c++
    //const int a=5;
    //cout<<"The value of a is "<<a<<endl;
    //a=7; //not possible.
    //cout<<"Now the value of a is: "<<a;
    
    
    //manipulators in c++:-
    //int a=3,b=78,c=1233;
    
    //cout<<"The value of a is : "<<a<<endl;
    //cout<<"The value of b is : "<<b<<endl;
    //cout<<"The value of c is : "<<c<<endl;
    //cout<<"The value of a is : "<<setw(4)<<a<<endl;//setw() is a manipulator
    //cout<<"The value of b is : "<<setw(4)<<b<<endl;
    //cout<<"The value of c is : "<<setw(4)<<c<<endl;
    
    //operators precedence:- 
    
    int a=3,b=4;
    int c=((((a*5)+b)-45)+87);
    cout<<c;
    
    
    
    

    return 0;
}
