#include <iostream>

using namespace std;

int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int ToAmount;
      cin >> ToAmount;
      if (ToAmount < 100)
	{
	  cout << "No discount..." << endl;
	}

      else if (ToAmount >= 100 && ToAmount < 500)
	{
	  cout << ToAmount * 10/100;
	}

      else if (ToAmount >= 500)
	{
	  cout << ToAmount * 20/100;
	}
	
	cout<<endl;
    }


  return 0;
}


