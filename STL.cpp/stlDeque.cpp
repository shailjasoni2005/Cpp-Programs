/*
Topic: deque In c++ !!   
It is totally different from double ended queue.

NOTES: 
1. deque is an indexed sequence container.
2.It allows fast insertion at both beginning and end.
3.It uses individual allocated fixed size array, with additional bookkeeping, meaning index based access to deque mst perform two pointer dereference, but in vector we get in one dereference.
4.The storage of a deque is automatically expanded and contractedas needed.
5.Expansion of deque is cheaper than expansion of vector .
6.A deque holding just one element has to allocate its full internal array (e.g. * times the object size on 64-bit libstdc++; 16 times the object size or 4096 bytes, whichever is larger ,on 64-bit libc++).

*/

#include<iostream>
#include<deque>
using namespace std;

void print(const deque<int>& dqu){ for(int num:dqu) cout<<num<<" "; cout<<endl;}
int main(){ 
{
    deque<int> dqu={2,3,4};
    dqu.push_front(1);
    dqu.push_back(5);
    print(dqu);
}
{
    deque<int> dqu={2,3,4};
    dqu.pop_front();
    dqu.pop_back();
    print(dqu);
}
return 0;
}