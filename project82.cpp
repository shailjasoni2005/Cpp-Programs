#include<iostream>
using namespace std;

class Student{
    private:
    int rollNo;
    string name;
    int maths;
    int science;
    int physics;
    public:

    Student(int r,string n,int m,int s,int p){
        rollNo=r;
        name=n;
        maths=m;
        science=s;
        physics=p;

    }

    int totalMarks(){
        return maths+science+physics;
    }

    char Grade(){
        float average=totalMarks()/3;
        if(average<40){
            return 'C';
        }
        else if(average>=40 && average<60){
            return 'B';
        }
        else{
            return 'A';
        }
    }
};

int main(){
    Student s(173,"shailja",85,92,94);
    cout<<"Total marks: "<<s.totalMarks()<<endl;
    cout<<"Grade: "<<s.Grade()<<endl;
    return 0;
}
