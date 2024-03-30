/* 
1. Multimap is an associative container that contains a sorted list of key - value pairs, while permitting multiplle entries with the same key.
2. It store key value pair in sorted order on the basis of key (assending/decending).
Syntax: multimap<char,int,greater<>> Multimap;
3.Data structure used in multimap is not defined by standard ,but red-black tree is assumed by most of the people.
4.Lookup: count,find,contains,equal_range,lower_bound,upper_bound.
5.We don't have at() and [] functions to get element like we had in map.
*/

#include <iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    multimap<char,int> Multimap;
    Multimap.insert(make_pair('a',1));
    // Multimap.insert(pair<char,int>('a',1));
    Multimap.insert(make_pair('a',2));
    Multimap.insert(make_pair('a',3));
    Multimap.insert(make_pair('b',4));
    Multimap.insert(make_pair('b',5));
    
    // cout<<Multimap.count('a');
    // cout<<Multimap.contains('a');               // this gives us true or false either we contains particular key or not.
    // auto pair = Multimap.find('a');
    // cout<<pair->first<<" "<<pair->second<<endl;
    
    auto range = Multimap.lower_bound('a');
    cout<<range->first<<" "<<range->second<<endl;
    auto upperrange = Multimap.upper_bound('a');
    cout<<upperrange->first<<" "<<upperrange->second<<endl;
    
 /*   //Iterate over multimap 
    for(auto& elm: Multimap){
        cout<<elm.first<<" "<<elm.second<<endl;
    }
    cout<<endl;
    //Get all the pairs of given key
    auto range = Multimap.equal_range('a');
    for(auto it=range.first; it!=range.second;++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
*/

    return 0;
}
