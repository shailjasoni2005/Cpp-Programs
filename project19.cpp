#include <iostream>

using namespace std;
int sum(int a,int b)
{
    cout<<"\nusing function with 2 argumnets: ";
    return a+b;
}
int sum(int a,int b,int c)
{
    cout<<"\n using function with 3 argumnets: ";
    return a+b+c;
}
//calculate volume of cylinder
int volume(double r,int h)
{
    return(3.14*r*r*h);
}
// calculate the volume of cube
int volume(int a)
{
    return(a*a*a);
}
//calculate volume of sphere
int volume(double r)
{
    return((4/3)*3.14*r*r*r);
}

int main()
{
    cout<<"the sum of 3 and 7 is "<<sum(3,7);
    cout<<"\nthe sum of 3,7 and 5 is "<<sum(3,7,5);
    cout<<"\nthe volume  of cylinder is "<<volume(4,8);
    cout<<"\nthe volume of cube is "<<volume(5);
    cout<<"\nthe volume of sphere is "<<volume(7);

    return 0;
}
