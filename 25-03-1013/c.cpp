
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

void solve()
{
  int n;
  cin >> n;
  // For even n, no valid permutation exists.
  if (n % 2 == 0)
  {
    cout << -1 << "\n";
    return;
  }
  // For odd n, construct the permutation using the doubling method.
  for (int i = 1; i <= n; i++)
  {
    int val = (2 * i) % n;
    if (val == 0)
      val = n;
    cout << val << " ";
  }
  cout << "\n";
}

int32_t main()
{
  fast_io;
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define F first
// #define S second
// #define endl '\n'
// #define fast_io                     \
//   ios_base::sync_with_stdio(false); \
//   cin.tie(NULL);
// #define mod 1000000007
// #define inf 1e18

// typedef pair<int, int> pii;
// typedef vector<int> vi;
// typedef vector<pii> vpii;
// typedef vector<vector<int>> vvi;
// typedef map<int, int> mii;

// void solve()
// {
//   // Your solution code here
//   int n;
//   cin >> n;
//   if(n==1){
//     cout << 1 << endl;
//     return;
//   }else{
//     if(n%2!=0){
//         for(int i=1;i<=n;i++){
//           cout << i << " ";
//         }
//         cout<<endl;
//     }else
//       cout << -1 << endl;
//   }

// }

// int32_t main()
// {
//   fast_io;
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     solve();
//   }
//   return 0;
// }
