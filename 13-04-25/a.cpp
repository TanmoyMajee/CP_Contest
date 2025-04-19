

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//   string str;
//   getline(cin, str); // reads the full line
//   stringstream ss(str);
//   string tmp;
//   vector<string> v;

//   while (getline(ss, tmp, ' '))
//   {
//     v.push_back(tmp);
//   }

//   // safety check
//   if (v.size() >= 3 && v[0].size() > 1 && !v[1].empty() && !v[2].empty())
//   {
//     string ans = "";
//     ans += v[0][1];
//     ans += v[1][0];
//     ans += v[2][0];
//     cout << ans << endl;
//   }
//   else
//   {
//     cout << "Invalid input" << endl;
//   }
// }

// int main()
// {
//   int t;
//   cin >> t;
//   cin.ignore(); // 👈 this is crucial to remove the leftover newline
//   while (t--)
//   {
//     solve();
//   }
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string str;
  getline(cin, str); // reads full line
  string ans = "";
  ans+=str[0];
  for(int i=1;i<str.size();i++){
    if(str[i]==' '){
        ans+=str[i+1];
    }
  }
  cout<<ans<<endl;
  // stringstream ss(str);
  // string tmp;
  // vector<string> v;

  // while (getline(ss, tmp, ' '))
  // {
  //   v.push_back(tmp);
  // }

  // // assume input is always 3 words with at least 1 char
  // if (v.size() == 3)
  // {
  //   char c1 = v[0].size() > 1 ? v[0][1] : '-'; // second character or placeholder
  //   char c2 = v[1][0];
  //   char c3 = v[2][0];

  //   cout << c1 << c2 << c3 << endl;
  // }
  // else
  // {
  //   cout << "Invalid input" << endl;
  // }
}

int main()
{
  int t;
  cin >> t;
  cin.ignore(); // removes leftover newline
  while (t--)
  {
    solve();
  }
  return 0;
}
