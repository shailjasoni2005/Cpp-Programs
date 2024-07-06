// Exercise:----

#include<iostream>
using namespace std;

class employee{
    private:
    int empId;
    string name;
    public:
    employee(int e,string n){
        empId=e;
        name=n;
    }
    int getEmpId(){return empId;}
    string getName(){ return name;}
};

class FullTimeEMployee:public employee{
    private:
    int salary;
    public: 
    FullTimeEMployee(int e,string n,int s):employee(e,n){
        salary=s;
    }
    int getSalary(){ return salary;}
};

class PartTimeEmployee:public employee{
    private:
    int wage;
    public:
    PartTimeEmployee(int e,string n,int w):employee(e,n){
        wage=w;
    }
    int getWage(){return wage;}
};

int main(){
    PartTimeEmployee p1(1,"jhon",300);
    FullTimeEMployee p2(2,"lucifer",5000);

    cout<<"salary of "<<p2.getName()<<"is "<<p2.getSalary()<<endl;
    cout<<"wage of  "<<p1.getName()<<" is "<<p1.getWage()<<endl;
    return 0;
}