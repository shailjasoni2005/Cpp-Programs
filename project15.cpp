#include <iostream>

using namespace std;

int sum(int a,int b)
{
    int c=a+b;
    return c;
}
void swap(int a,int b)   //This will not swap a and b.
{
    int temp =a ;
    a = b;
    b = temp;
}
//call by reference using reference variables:-
int & swapReferencevar(int &a,int &b)
{
    int temp =a ;
    a = b;
    b = temp;
    return a;
}


int main()
{
    int x=4;
    int y=5;
    cout<<"The value of x & y is "<<x<<","<<y;
    //swap(x,y);    //This will not swap a and b.
    //swapPointer(&x,&y);  //This will  swap a and b by using reference pointers.
    swapReferencevar(x,y) = 766;
    cout<<"\nThe value of x & y is "<<x<<","<<y;

    return 0;
}
