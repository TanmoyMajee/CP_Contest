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

void solve()
{
  // Your solution code here
 int n;
 cin >> n;
 int arr[n];
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }
  string date = "01032025";
  unordered_map<int,int> mp;
  for(auto it : date){
    mp[it-'0']++;
  }

  // now cnt
  int ans=0;
  for(int i=0;i<n;i++){
    if(mp.find(arr[i])!=mp.end()){
      mp[arr[i]]--;
      if (mp[arr[i]] == 0)
        mp.erase(arr[i]);
      if (mp.empty())
      {
        ans = i + 1;
        break;
      }
    }
  }
  cout << ans << endl;
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
