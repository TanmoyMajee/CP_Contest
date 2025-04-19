
#include <bits/stdc++.h>
using namespace std;

void solve()
{
int n,m,l,r;
cin>>n>>m>>l>>r;
int l1 ; int r1;
if(m<=r){
    l1 = 0;
    r1 = m;
}
else{
    l1 = m - r;
    l1*=-1;
    r1 = r;
}
cout<<l1<<" "<<r1<<endl;

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
