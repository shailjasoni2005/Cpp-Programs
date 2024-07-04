//constructors in inheritance;-

/*when we create constructors in both base and derived classes then during creating the object the derived class contructor is first called ,this will call the non parameterized constructor of base class , then executes the constructor of base then derived class. And by default , default constructor is called.
calling and execution are two different terms.
And we can call the parameterized contsructor of base class using derived class.
when we try to call parameterized constructor of derived class then first base class default constructor is called.
In short the constructors are called from derived to base but they are executed from base to derived.
*/

#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"default of base"<<endl;
    }
    Base(int x){
        cout<<"param of base "<<x<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Default of derived"<<endl;
    }
    Derived(int a){
        cout<<"param of derived "<<a<<endl;
    }
    Derived(int a,int b):Base(a)
    {
        cout<<"param of derived "<<a<<" "<<b<<endl;
    }
};

int main(){
    // Derived d;
    // Derived d(10);     
    Derived d(5,10);     


    return 0;
}