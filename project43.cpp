#include <iostream>

using namespace std;

int main()
{
    int n,r,rev;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    //  cout<<rev;
    n=rev;
        
    
    while(n>0)
    {
        r=n%10;
        n=n/10;
        
        switch(r)
        {
            case 0:
            cout<<"zero\t";
            break;
            case 1:
            cout<<"one\t";
            break;
            case 2:
            cout<<"two\t";
            break;
            case 3:
            cout<<"three\t";
            break;
            case 4:
            cout<<"four\t";
            break;
            case 5:
            cout<<"five\t";
            break;
            case 6:
            cout<<"six\t";
            break;
            case 7:
            cout<<"six\t";
            break;
            case 8:
            cout<<"eight\t";
            break;
            case 9:
            cout<<"nine\t";
            break;
            
        }
    }
    // cout<<rev<<endl;

    return 0;
}

