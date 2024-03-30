#include <iostream>
#include<set>
#include<functional>
#include<string>
using namespace std;

class person
{
    public:
    
    float age;
    string name;
};

int main()
{
    // set<int> Set={1,2,3,4,5,1,2,3,4,5};
    set<person> Set = {{32,"jungkook"},{23,"taehyung"},{26,"jimin"}};
    for(auto const& e:Set)
    {
        cout<<e.age<<" "<<e.name<<endl;
    }

    return 0;
}
