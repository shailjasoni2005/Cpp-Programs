#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5> myArray ;
    myArray = {1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        cout<<myArray.data()<<" ";
    }

    return 0;
}
