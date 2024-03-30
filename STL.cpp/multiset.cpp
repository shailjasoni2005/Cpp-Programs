/* Syntax:- multiset<T> objectName;
1.multiset is an associated container that contains a sorted set of duplicates of type key 
2. It is usually implemented using Red-black Tree.
3.Insertion,removal,search have logarithmic commplexity.
4.If we want to store user defined data type in multiset then we will have to provide compare function so that multiset can store them in sorted order.
5. We can pass the order of sorting while constructing set object .


//multiset is similar to set except it can have multiple elements with same value .
*/


#include<iostream>
#include<set>
#include<string>
#include<functional>

using namespace std;

// User defined data type.
class Person{
    public:
    float age;
    string name;
    bool operator < (const Person& rhs) const{ return age<rhs.age;}
    bool operator > (const Person& rhs) const{ return age>rhs.age;}
    
};

int main()
{
    multiset<Person,greater<Person>> multiset = {{25,"Jungkook"},{27,"Taehyung"}};
    
    for(const auto& e: multiset){
        cout<<e.age<<" "<<e.name<<endl;
    }
    
    return 0;
}

// int main()
// {
//     // multiset<int> multiset={5,2,4,3,2,5};
//     multiset<int , greater<int>> multiset={5,2,4,3,2,5};
//     multiset.insert(20);
//     for(const auto& e:multiset){
//         cout<<e<<endl;
//     }
    
    
//     return 0;
// }


