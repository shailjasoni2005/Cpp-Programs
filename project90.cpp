/*Ways of inheritance:-
-> when derived class accesses the members and member functions of base class publicly then except private members other members are accessed publicly. i.e. they are publicly comes into derived class.
-> If they are accessed using protected access specifier then they becomes protected members in derived class.
-> And if they are accessed using private specifier then they becomes private members and then any other class cannot access them.*/

#include<iostream>
using namespace std;

class parent{
    private:int a;
    protected:int b;
    public:int c;
    void funParent(){
        a=10;
        b=15;
        c=20;
    }
};

class child:private parent{
    public:
    void funChild(){
        // a=10;
        b=15;
        c=25;
    }
};

class grandChild:public child{
    public:
    void funGrandChild(){
        // a=10;
        // b=21;
        // c=30;
    }
};

int main(){
    child C;
    // C.a=12;
    // C.b=90;
    // C.c=30;
    return 0;
}