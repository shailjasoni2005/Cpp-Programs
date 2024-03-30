#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    cout<<&a<<" "<<&b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<&x<<" "<<&y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;

    return 0;
}
