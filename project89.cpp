/*access specifiers: Private,protected,public.

inside the class we can access private,protected as well as public members.
we cannot access private & protected members upon an object of a base class, but can access public members.
And in derived class , it cannot access private members but can access protected & public members of base class . Because they are available but not accessable.*/

// program:-
#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    // Rectangle(int l=0,int b=0){
    //     length=l;
    //     breadth=b;
    // }
    void setlength(int l){ 
        if(l>0){
        length=l;}
        else{
        length=0;} 
        }
    void setbreadth(int b){
        if(b>0){
             breadth=b;}
             else{
                breadth=0;
             }
    }
    int getlength(){return length;}
    int getbreadth(){return breadth;}
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }

};

int main(){
    Rectangle r;
    r.setlength(10);
    r.setbreadth(5);
    cout<<r.area();
    return 0;
}
