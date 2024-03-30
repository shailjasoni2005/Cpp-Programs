#include <iostream>

using namespace std;
int sum(int,int);
void g();
int main()
{
    int num1 ,num2;     //actual parameters
    cin>>num1;
    cin>>num2;
    cout<<sum(num1,num2);
    g();

    return 0;
}
int sum(int a,int b)   //Formal parameters
{
    int  c=a+b;
    return c;
}
void g()
{
    cout<<"\nHello, good morning";
}

