//there are two types of header files 
/*1. system header files:it comes with the compiler 
2. user defined header files; it is written by the programmer*/

#include <iostream>

using namespace std;

int main()
{
    int a=4,b=5;
    cout<<"following are the arithmetic operators in c++ "<<endl;
    //arithmetic operators
    
    cout<<"Value of a+b is "<<a+b<<endl;
    cout<<"Value of a-b is "<<a-b<<endl;
    cout<<"Value of a*b is "<<a*b<<endl;
    cout<<"Value of a/b is "<<a/b<<endl;
    cout<<"Value of a%b is "<<a%b<<endl;
    cout<<"Value of a++ is "<<a++<<endl;
    cout<<"Value of a-- is "<<a--<<endl;
    cout<<"Value of ++a is "<<++a<<endl;
    cout<<"Value of --a is "<<--a<<endl;
    cout<<endl;
    
    //assignment operators = used to assign operators to variables 
    // int a=9 , b=4;
    
    //Comparison operators
    cout<<"Following operators are the comparison operators: ";
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    
    //logical operators
    cout<<"Following operators are the logical operators: "<<endl;
    cout<<"the value of and logical operator (a==b) && (a<b) is: "<<((a==b) && (a<b))<<endl;
    cout<<"the value of or logical operator (a==b) || (a<b) is: "<<((a==b) || (a<b))<<endl;
    cout<<"the value of not logical operator !(a==b)  is: "<<(!(a==b))<<endl;

    return 0;
}