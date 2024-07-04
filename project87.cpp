//Inheritance:-

//Basics:-
// #include<iostream>
// using namespace std;

// class Base{
//     public:
//     int a;
//     void Display(){
//         cout<<"Display of base\t"<<a<<endl;
//     }
// };

// class Derived:public Base{
//     public:
//     void show(){
//         cout<<"Show of derived class"<<endl;
//     }
// };

// int main(){
//     Derived b;
//     b.a=100;
//     b.Display();
//     b.show();
//     return 0;
// }

//------------Example-----------//

#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getlength(){
        return length;
    };
    int getbreadth(){
        return breadth;
    };
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

class Cuboid:public Rectangle{
    private:
    int height;
    public:
    Cuboid(int h){
        height=h;
    }
     void setheight(int h){
        height=h;
    }
    int getHeight()
    {
        return height;
    }
    int volume(){
        return getlength()*getbreadth()*height;
    }
};

int main(){
    Cuboid c(5);
    c.setLength(6);
    c.setBreadth(4);
    cout<<c.volume();
    return 0;
}

Rectangle::Rectangle(){
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b){
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r){
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l){
    length=l;
}
void Rectangle::setBreadth(int b){
    breadth=b;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare(){
    return length==breadth;
}
Rectangle::~Rectangle(){
    // cout<<"constructor destroyed"<<endl;
}