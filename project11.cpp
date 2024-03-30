#include <iostream>

using namespace std;

struct employee 
{
    int id;
    float salary;
};
int main()
{
    struct employee shailja;
    shailja.id = 175;
    shailja.salary = 1000000;
    
    cout<<shailja.id<<endl;
    cout<<shailja.salary<<endl;
    return 0;
}
