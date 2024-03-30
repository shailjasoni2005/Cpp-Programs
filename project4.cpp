#include <iostream>

using namespace std;

int c = 45;

int main()
{
    /*build in datatypes*/
    //int a,b,c;
    
    //cout<<"Enter the value of a ";
    //cin>>a;
    //cout<<"Enter the value of b ";
    //cin>>b;
    //
    //c=a+b;
    //cout<<"The sum is "<<c<<endl;
    //cout<<"The global c  is "<<::c;
    
    /*float,double and long double literals datatypes*/
    //float d = 34.4f;
    //long double  e = 34.4l;
    
    //cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    //cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    //cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    //cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    //cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    //
    //cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    //

    /*reference variables*/
    
    //float x=455;
    //float &y = x;         //y is reference variable 
    //cout<<x<<endl<<y;


     /*typecating */
     int a=45;
     float b = 45.5;
     cout<<"the value of a is "<<(float)a<<endl;
     cout<<"the value of a is "<<float(a)<<endl;
     cout<<"the value of b is "<<float(b)<<endl;
     cout<<"the value of b is "<<(int)b<<endl;
     
     int c= int(b);
     
     cout<<"The expression is "<<a+b<<endl;
     cout<<"The expression is "<<a+(int)b<<endl;
     cout<<"The expression is "<<a+int(b)<<endl;
     
    return 0;
}
