#include <iostream>
using namespace std;

class employee
{
private:
  int a, b, c;
public:
  int d, e;
  void setdata (int a, int b, int c);
  void getdata ()
{
  cout<<"value of a:"<<a<<endl;
  cout<<"value of b:"<<b<<endl;
  cout<<"value of c:"<<c<<endl;
  cout<<"value of d:"<<d<<endl;
}
};
void
employee::setdata (int a1, int b1, int c1)
{				//Function decalaration.
  a = a1;
  b = b1;
  c = c1;
}



int
main ()
{
  employee obj;			//object created  
  obj.setdata (3, 7, 8);	//Function calling.
  obj.getdata ();

  return 0;
}

