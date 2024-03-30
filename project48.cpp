#include <iostream>

using namespace std;

int main()
{
    int A[10],n,i;
    cout<<"Enter the numbers: ";
    for(i=0;i<10;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the search value: ";
    cin>>n;
    
    for(i=0;i<10;i++)
    {
        if(A[i]==n)
        {
            cout<<"Element found at: "<<i;
            return 0;
        }
    }
    
    cout<<"element not found";
    

    return 0;
}
