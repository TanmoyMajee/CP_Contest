
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n , t;
  cin >> n >>t;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  // now algo
  int l=arr[0], r=arr[n-1];
  int d = min(abs(t-l),abs(t-r));
  int ans = d + r-l;
  cout<<ans<<endl;
}

int main()
{
  int t;
  cin >> t;
  // cin.ignore();
  while (t--)
  {
    solve();
  }
  return 0;
}
