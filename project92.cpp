//Base class pointer , Derived class object:-
#include<iostream>
using namespace std;

// class Base
// {
//     public:
//     void fun1(){
//         cout<<"fun1 of base"<<endl;
//     }
// };

// class Derived:public Base{
//     public:
//     void fun2(){
//         cout<<"fun2 of derived class "<<endl;
//     }
// };

// int main(){

//     Base *P;
//     P = new Derived; 
//     // Derived d;
//     // Base *Ptr=&d; 
//     P->fun1();
//     // Ptr->fun2();     //This is wrong.
//     return 0;
// }

// class Rectangle
// {
// public:
//     void area(){
//         cout<<"Area of rectangle is 50"<<endl;
//     }
// };

// class Cuboid:public Rectangle{
//     public:
//     void volume(){
//         cout<<"Volume of cuboid is 90"<<endl;
//     }
// };

// int main(){
//     Cuboid c;
//     Rectangle *P=&c;
//     P->area();
//     // P->volume();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class BasicCar
// {
//     public:
// 	void start()
// 	{
// 		cout<<"Car Started"<<endl;
// 	}
	
// };
    
// class AdvanceCar:public BasicCar
// {
//     public:
// 	void playmusic()
// 	{
// 		cout<<"Playing Music"<<endl;
// 	}
	
// };
    
// int main()
// {
// 	BasicCar b;
// 	// AdvanceCar *q=&b;
// 	AdvanceCar a;
// 	a.start();
// 	a.playmusic();
// 	BasicCar *ptr=&a;
// 	ptr->start();
// 	// ptr->playmusic(); // this function cannot be called.
	    
// }
    