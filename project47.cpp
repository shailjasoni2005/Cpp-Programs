#include <iostream>

using namespace std;

int main()
{
    int A[7]={2,6,5,7,8,3,9};
    int i,max=2;
    for(i=0;i<7;i++)
{
    if(A[i]>max)
    {
        max=A[i];
    }
    
}
    cout<<max<<endl;

    return 0;
}
