#include <iostream>

using namespace std;

int main()
{
    int A[2][3]={{2,4,6},{3,5,7}},i,j;
    int B[2][3]={{1,8,9},{10,13,15}},C[2][3];
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            // C[i][j]=A[i][j]+B[i][j];
            // C[i][j]=A[i][j]*B[i][j];
            C[i][j]=A[i][j]-B[i][j];
        }
        
    }
    
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}
