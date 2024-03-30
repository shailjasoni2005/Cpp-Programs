#include <iostream>

using namespace std;

int main()
{
    char s[100],s2[100];
    
    cout<<"Enter your name ";
    // cin.get(s,100);
    cin.getline(s,100);
    
    cout<<"welcome "<<s<<endl;
    
    // cin.ignore();
    
    
    cout<<"Enter your name again ";
    // cin.get(s2,100);
    cin.getline(s2,100);
    
    cout<<"welcome "<<s2<<endl;

    return 0;
}
