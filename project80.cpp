#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:

    Rectangle(){
        length=1;
        breadth=1;
    }
    Rectangle(int l,int b){
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r1)
    {
        length=r1.length;
        breadth=r1.breadth;
    }

    void setLength(int l)
    {
        if(length>0){
        length = l;
        }
        else{
            length=0;
        }
    }
    void setBreadth(int b)
    {
        if(breadth>0){
            breadth = b;
        }
        else{
            breadth=0;
        }
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    int area(){
        return length*breadth;
    }
    int perimeter()
    {
        return (2*(length*breadth));
    }
};

int main(){
    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout<<r2.area()<<endl;
}