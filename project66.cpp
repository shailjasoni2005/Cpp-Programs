#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str="today";
    // string::iterator it;
    
    // for(it=str.begin();it!=str.end();it++)
    // {
    //     *it=*it-32;
    //     cout<<*it;
    // }
    
    
    // string::reverse_iterator it;
    
    // for(it=str.rbegin();it!=str.rend();it++)
    // {
    //     // *it=*it-32;
    //     cout<<*it;
    // }
    
    
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }
    

    return 0;
}
