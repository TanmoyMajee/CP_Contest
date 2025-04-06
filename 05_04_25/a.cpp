
#include <bits/stdc++.h>
using namespace std;

// #define int long long
// #define fast_io                     \
//   ios_base::sync_with_stdio(false); \
//   cin.tie(NULL);

bool fun(long long prex, long long n, long long k, long long m, long long t, long long ts)
{
  // cnt no of seg behind
  long long seg = ((n * k) - m - 1) / n;
  long long val = prex + (seg * ts);
  if (val >= t)
    return true;
  return false;
}

void solve()
{
  int n;
  cin >> n;
  if(n%2==0){
    cout << -1 << endl;
    return;
  }
  cout<<n;
  for(int i=1;i<n;i++){
    cout<<" "<<i;
  }
  cout<<endl;
}

int main()
{
  // fast_io;
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}

