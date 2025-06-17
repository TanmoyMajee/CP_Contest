
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n ;
  string s;
  cin>>s;
  // now algo
  // vector<int> vec(26,0);'
  unordered_map<char,int> mp;
  for(auto it : s){
    // vec[it-'a']++;
    mp[it]++;
  }
  // for(auto it : vec)cout<<it;
  // now go from 1 to n-2
  bool falg = false;
  for(int i=1;i<=n-2;i++){
      // char ch = s[i]; int cnt = vec[ch-'a'];
      int cnt = mp[s[i]];
      if(cnt>1){
        falg = true;
        break;
      }
  }
  if(falg)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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
