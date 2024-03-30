#include <iostream>
#include<string>

using namespace std;
class binary{
        string s;
    public: 
          void read(void);
          void checkbinary(void);
          void ones(void);
          void display(void);
    };
    void binary :: read(void){
        cout<<"Enter a binary number ";
        cin>>s;
    }
    void binary :: checkbinary(void){
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"\n Incorrect binary format.."<<endl;
                exit(0);
            }
        }
        cout<<"\ncorrect binary format..";
        
    }
    void binary :: ones(void)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='0')
            {
                s.at(i) = '1';
            }
            if(s.at(i)=='1')
            {
                s.at(i)=='0';
            }
        }
    }
    void binary :: display(void)
    {
        for(int i=0;i<s.length();i++)
        {
        cout<<s.at(i);
        }
        cout<<endl;
    }

int main()
{
    /*oops classes and object
    c++-->initially called-->c with classes by stroustroup
    classes are extension of structures in 
    structures had limitations : members are public
                                 no methods
                                 classes are structures+more
                                 classes can have methods and properties
                                 classes can make few memebers as public,private and protected.
                                 structures in c++ are typedef
                                 you can declare objects along with class declaration
                                 ex:- class emloyee{
                                     //class definition
                                 } shailja, aalu, sansu;     // these are objects
                                 shailja.salary=8 makes no sence if salary is private
                                 
    
    Nesting of member functions:
    */
    binary b;
    b.read();
    b.checkbinary();
    b.display();
    b.ones();
    b.display();


    return 0;
}
