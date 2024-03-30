#include <iostream>
using namespace std;

class parent{
    public:
    void Display()
    {
        cout<<"Display of parent class"<<endl;
    }
};

class child:public parent{
    public:
    void Display()
    {
        cout<<"Display of child class"<<endl;
    }
    
};


int main()
{
    parent p;
    p.Display();
    
    child c;
    c.Display();
    

    return 0;
}
