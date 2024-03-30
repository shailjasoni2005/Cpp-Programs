/*
1.This is single linked list what we know fro c programming language.
2.We should use this class instead of traditional single linked list because :
a.well tested.
b.Bunch of available function.
3.Few available operations:
operator = assign,front,empty,max_size,clear,insert_after,emplace_after,reverse,sort,merge,splice_after,unique,remove,remove_if,resize.
*/

#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> list1={5,4,6,2,2};
    forward_list<int> list2={7,6,1,9};
    // list1.insert_after(list1.begin(),8);

    // list1.emplace_after(list1.begin(),8);

    // list1.reverse();

    /*list1.sort();
      list2.sort();
      list1.merge(list2);*/

    //using splice function we can remove some data from one list and place into another list.
    //list1.splice_after(list1.begin(),list2);

    //Unique will remove only adjacent duplicates.

    // list1.unique();

    // list1.remove(2);               //it will remove duplicates as well.

    //If we want to remove some values less that or greater than some number then we use remove_if in which we use lambda function.

    // list1.remove_if([] (int n){
    //     return n>4;
    // });

    list1.resize(6);

    for(auto& elm:list1)
    {
        cout<<elm<<" ";
    }
    // cout<<"\nSize of list2 "<<distance(list2.begin(),list2.end())<<endl;

   //remove
   

    return 0;
}