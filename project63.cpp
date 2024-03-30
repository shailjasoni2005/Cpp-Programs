#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str="hello world";
    
    cout<<str.find_first_of("wo")<<endl;
    
    cout<<str.find_last_of('l')<<endl;

    return 0;
}
