#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str1,str="madam";
    
    string::reverse_iterator it;
    
    for(it=str.rbegin();it!=str.rend();it++)
    {
        str1=*it;
    }
    
    cout<<str1<<endl;
    
    if(str.compare(str1)==0)
    {
        cout<<"pallindrome"<<endl;
    }
    else
    {
        cout<<"not a pallindrome string"<<endl;
    }
    
    

    return 0;
}
