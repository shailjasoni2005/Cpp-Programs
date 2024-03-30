#include <iostream>

using namespace std;

int main()
{
    int l=0,h=9,mid,key,A[10]={2,4,6,8,9,10,12,15,20,25};
    cout<<"Enter search key: ";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Element found at: "<<mid;
            return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    return 0;
}
