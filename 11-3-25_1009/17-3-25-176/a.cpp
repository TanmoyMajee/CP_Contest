#include <bits/stdc++.h>
using namespace std;




void solve()
{
 int n,k;
 cin>>n>>k;
 int cnt = 0;
  if(n%2!=0){
    cnt++;
    n=n-k;
  }
  if(n<=0){
    cout<<cnt<<endl;
    return;
  }
  // now algo
  int k_even = k-1;
  int ans = n/k_even + ((n%k_even!=0)?1:0);
  cnt+=ans;
  cout<<cnt<<endl;
}

int32_t main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
