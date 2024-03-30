/*
functions of string:---------



1.  str.length() = this will tell the length of the string . 
2.  str.size() = this is same as the length function . -> either we can use length or size.
3.  str.capacity() = this function gives the capacity t string that how many characters you can add into it. this is dynamic.
4.  str.resize(30) = if we want to increase capacity we can use resize function 
5.  str.max_size() = this functions tells us what is the maximum size, our compiler can have of a string.
6.  str.clear() = this will clear the contents of testing.
7.  str.empty() = this will find out whether a string is empty or not.
*/

#include <iostream>
#include<string>

using namespace std;

int main()
{
    // we will use all functions in this program.
    string str="hello";
    
    cout<<str.length()<<endl;
    
    cout<<str.size()<<endl;
    
    str.resize(50);
    
    cout<<str.capacity()<<endl;
    
    
    cout<<str.max_size()<<endl;
    
    str.clear();

    str.empty();
    return 0;
}

