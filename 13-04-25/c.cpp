
#include <bits/stdc++.h>
using namespace std;

void solve()
{
int n;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cin>>arr[i][j];
  }
}

    if (n == 1) {
        int v = arr[0][0];
        if (v == 1) {
            cout << 2 << " " << 1 << "\n";
        } else {
            cout << 1 << " " << 2 << "\n";
        }
        return;
    }
    
// now cal
int ans[2*n]; int s = 0;
int indx = 1;
for(int i=0;i<n;i++){
  s+=arr[0][i];
  ans[indx] = arr[0][i];
  indx++;
}

// if(n==1){
//   int v = arr[0][0];
//   if(v==1){
//     cout<<1<<" "<<2<<endl;
//   }
//   else{
//     cout<<2<<" "<<1<<endl; 
//   }
//   return;
// }

// now for last col
for(int i=1;i<n;i++){
  s+=arr[i][n-1];
  ans[indx] = arr[i][n-1];
  indx++;
}
//cal the miss
n*=2;
int mis = ((n*(n+1))/2 ) - s;
ans[0] =mis;

for(auto i: ans){
  cout<<i<<" ";
// cout<<endl;
}

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
