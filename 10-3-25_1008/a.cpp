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
  int n , x;
  cin>>n>>x;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  // now cal the avg
  int sum=0;
  for(auto it : arr)
    sum+=it;
    int avg=sum/n;
  if(avg==x && sum%n==0)
    cout<<"YES"<<endl;  
  else
    cout << "NO" << endl;
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
