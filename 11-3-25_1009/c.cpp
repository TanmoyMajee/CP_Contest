#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define F first
#define S second
#define endl '\n'
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define mod 1000000007
#define inf 1e18

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vector<int>> vvi;
typedef map<int, int> mii;

// void solve()
// {
//   // Your solution code here
//   int a;
//   cin >> a;
//   int ans = -1;

//   for (int i = a - 1; i >= 1; i--)
//   {
//     int b = i;
//     int c = a ^ b;
//     if ((a + b > c) && (a + c > b) && (b + c > a))
//     {
//       ans = b;
//       break;
//     }
//   }

//   cout<<ans<<endl;
// }'

void solve(){
  int a;
  cin >> a;
 int s = floor(log2(a)); int p=-1;
  for(int i=s-1;i>=0;i--){
    // find any bit taht has 0
    if (((1 << i) & a) == 0)
    {
      p = i;
      break;
    }
  }
  if(p==-1)cout<<p<<endl;
  else{
    int ans = pow(2,s) + pow(2,p);
    cout<<ans<<endl;
  }
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
