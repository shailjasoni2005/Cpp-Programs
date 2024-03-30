#include <iostream>

using namespace std;

int main()
{
    int A[7]={2,5,7,8,9,2,4,};
    int sum=0;
    for(int i=0;i<7;i++)
    {
        sum=sum+A[i];
        cout<<sum<<endl;
    }

    return 0;
}
