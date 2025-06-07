
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> ans;
  ans.push_back(0);
  int min = 0, mx = 0;
  for(auto it : s){
    if(it=='>'){
      mx++;
      ans.push_back(mx);	
    }else{
      min--;
      ans.push_back(min);
    }
    
  }
  int diff = n-mx;
  for(int i = 0; i < ans.size(); i++){
    ans[i] += diff;
  }
// print thee ans
for(auto i : ans){
    cout << i << " ";
  }
    cout << endl;

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
