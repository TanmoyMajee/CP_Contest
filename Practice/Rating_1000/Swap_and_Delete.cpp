#include <bits/stdc++.h>
using namespace std;

void algo(){
  string s;
  cin>>s;
  int zero = 0 , one = 0;
  for(auto it : s){
    if(it=='0')zero++;
    else one++;
  }
  int n = s.size();
  int i;
  for(i=0;i<n;i++){
    if(s[i]=='0'){
      if(one<=0)break;
      one--;
    }else{  // for 1 
      if (zero <= 0)break;
          zero--;
    }
  }
  cout<<n-i<<endl;
}

int main(){
  int t;
  cin>>t;
  while (t--)
  {
    algo();
  }
  return 0;
}