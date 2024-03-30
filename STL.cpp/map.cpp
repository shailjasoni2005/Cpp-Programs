/*
1.syntax:- map<T1,T2> bj; // Where T1 is key type and T2 is value Type.
2. map is associative container that store elements in key value combination where key should be unique,
otherwise it overrides the previous value.
3.It is implement using self-balance binary search tree (AVL/Red Black Tree).
4.It store key value pair in sorted order on the basis of key (Assending/decending).
5.map is generally used in dictionary type problems.
*/

//Example dictionary:-

#include <iostream>
#include<map>
#include<functional>
#include<vector>
using namespace std;

int main()
{
    // map<string, int> Map;
    map<string, int,greater<string>> Map;
    Map["Shailja"]= 2732;
    Map["Satish"]=7320;
    Map.insert(make_pair("Juhi",8529));
    
    //Loop through Map
    for(const &el1: Map){
        cout<<el1.first<<" "<<el1.second<<endl;
    }
    
    //access using [] operator
    cout<<Map["Shailja"]<<endl;

    return 0;
}
