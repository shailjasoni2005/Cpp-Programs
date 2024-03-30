#include <iostream>
// #include<vector>
// #include<list>
// #include<forward_list>
#include<set>

using namespace std;

int main()
{
    /*
    STL:- standard template library...
    it has:-
            1.algorithms
            2.containers
            3.iterators
            
        Containers of STL(classes):-
        these are template classes.i.e. they can be used for any data types.
        
                            1.vector:-
                            
                                    This is array which can be reduced and increased using functions.
                                    It contains functions:
                                                        1.push_back
                                                        2.pop_back
                                                        3.insert()
                                                        4.remove()
                                                        5.empty()
                            
                            2.list:-
                                    This is a doubly linked list.
                                    Its contains same functions with:-
                                                        6.push_front
                                                        7.push_back
                                                        8.front()
                                                        9.back
                                                        
                            3.forward_list:-
                                    this is for single linked list.
                                    same set of methods this contains.
                                    
                            4.dequeue:-
                                    this is same as vectors.But in this we can insert an delete elements from both the end.
                                    It also contains same functions.
                                    
                            5.priority_queue:-
                                    This is for max heap data structures.It means always the largest data element will be deleted.
                                    It contains:-
                                                        push()
                                                        pop()
                                                        empty()
                                                        size()
                                                        
                            6.stack:-
                                    it follows LIFO principle.
                                    
                            7.set:-
                                    It contains only unique element.i.e. duplicates are not allowed.And the lements are not in order.
                                    
                            8.multiset:-
                                    It is same as the set but it can contain duplicate values.
                                    
                            9.map:-
                                    It stores key value pair.This contains unique key.
                                    key<value>.This uses hash table.
                                    
                            10.multimap:-
                                    This is same as the map but keys can be duplicate.But same key<value> pair are not allowed.
        */
        
        // vector<int> v={1,2,3,4,5};
        // list<int> v={1,2,3,4,5};
        // set<int> v={1,2,3,4,5,10};
        multiset<int> v={1,2,3,4,5,10};
        v.insert(10);
        for(int x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        
        // vector<int>::iterator itr;
        multiset<int>::iterator itr;
        for(itr=v.begin();itr!=v.end();itr++)
        {
            cout<<*itr<<" ";
        }

    return 0;
}

