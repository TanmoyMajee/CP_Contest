#include <iostream>
using namespace std;

bool isPrime(long long n)
{
  if (n < 2)
    return false;
  for (long long i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long x;
    int k;
    cin >> x >> k;
    // Case when there is no repetition (k == 1)
    if (k == 1)
    {
      cout << (isPrime(x) ? "YES" : "NO") << "\n";
    }
    else
    {
      // For any k > 1, if x is not 1, then y is composite because:
      // y = x * (some number greater than 1)
      if (x != 1)
      {
        cout << "NO" << "\n";
      }
      else
      { // x is 1, so y is a repunit of length k: (10^k - 1)/9
        // Only when k == 2 (i.e., y = 11) is the repunit prime.
        cout << ((k == 2) ? "YES" : "NO") << "\n";
      }
    }
  }
  return 0;
}
