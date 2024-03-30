#include <iostream>

using namespace std;

int main()
{//if ,else if, else if, else if, else statement:-
    int age;
    cout<<"Enter the age:- ";
    cin>>age;
    cout<<endl;
    //
    //if(age<18 && age>0){
    //    cout<<"You are  a kid and you cannot come to my party";
    //}
    //else if(age==18){
    //    cout<<"yes you can come to my party";
    //}
    //else if(age>18){
    //    cout<<"ohh great! you are an adult and you can come to my party";
    //}
    //else if(age<1){
    //    cout<<"You are not yet born";
    //}
    //else{
    //    cout<<"blah blah blah";
    //}
// selection control sturcture:switch case statement:- 
    switch(age)
    {
        case 18:
        cout<<"You  are 18 ";
        break;
        case 22:
        cout<<"You  are 22 ";
        break;
        case 2:
        cout<<"You  are 2 ";
        break;
        
        default:
        cout<<"No more special cases"<<endl;
        break;
    }
    cout<<"Done with switch  case ";
    return 0;
}
