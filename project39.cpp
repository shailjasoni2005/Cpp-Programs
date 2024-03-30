#include <iostream>

using namespace std;

int
main ()
{
  int n, sum = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
    {
      if (n % i == 0)
	{
	  sum++;
	}
    }

  if (sum == 2)
    {
      cout << n << " is a prime no. ";
    }
  else
    {
      cout << "Not a prime no.";
    }

  return 0;
}

