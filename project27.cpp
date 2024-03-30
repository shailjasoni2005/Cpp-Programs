#include <iostream>

using namespace std;

typedef int net_salary;
typedef int basic_salary;
typedef int percentage_of_allowances;
typedef int percentage_of_deductions;

int main()
{
    net_salary n;
    basic_salary s;
    percentage_of_allowances a;
    percentage_of_deductions d;
    cout<<"Enter basic salary: ";
    cin>>s;
    cout<<"\nEnter % of allowances";
    cin>>a;
    cout<<"\nEnter % of deductions";
    cin>>d;
    
    n=s+s*a/100-s*d/100;
    cout<<"\nNet salary: "<<n;
    
    

    return 0;
}
