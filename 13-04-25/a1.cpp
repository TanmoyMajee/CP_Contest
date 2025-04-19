
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string str;
  getline(cin, str); // reads full line
  string ans = "";
  ans += str[0];
  for (int i = 1; i < str.size(); i++)
  {
    if (str[i] == ' ')
    {
      ans += str[i + 1];
    }
  }
  cout << ans << endl;

}

int main()
{
  int t;
  cin >> t;
  cin.ignore(); 
  while (t--)
  {
    solve();
  }
  return 0;
}
