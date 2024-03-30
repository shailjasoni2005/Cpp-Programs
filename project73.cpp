#include<iostream>
using namespace std;

int * fun(int a)
{
    int *p=new int[5];           //creating array inside heap and p is the pointer to that memory
     for(int i=0;i<5;i++)
     {
         p[i]=i+1;
    
     }
     cout<<p<<endl;
     return p;
     
    
}


int main ()
{
    int *q=fun(5);
    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<endl;
    }
    cout<<q<<endl;
	
	return 0;
}

