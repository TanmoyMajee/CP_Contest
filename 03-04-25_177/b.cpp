
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
  long long  n,k,x;
  cin >> n >> k >> x;
  long long arr[n];
  for(long long i=0;i<n;i++)
    cin>>arr[i];
      //  cal the prefix
   vector<long long> vec(n);
   long long s = 0; 
   for(long long i=n-1;i>=0;i--){  
      vec[i] = s + arr[i];
      s=vec[i];
   }   
  //  app BS
  long long l=0;
  long long r = n * k - 1;
  long long indx=-1;

while(l<=r){
  long long m = l + (r-l)/2;
    if(fun(vec[m%n] , n,k,m,x,vec[0])){ // go as R as pos
        indx = m;
        l=m+1;
    }else{
      r=m-1;
    }
}
      
  cout << indx+1 << endl;
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

// #include <bits/stdc++.h>
// using namespace std;

// bool fun(long long prex, long long n, long long k, long long m, long long t, long long ts)
// {
//   // Calculate number of complete segments (cycles) after position m
//   long long seg = ((n * k) - m - 1) / n;
//   long long val = prex + (seg * ts);
//   return val >= t;
// }

// void solve()
// {
//   long long n, k, x;
//   cin >> n >> k >> x;
//   vector<long long> arr(n);
//   for (long long i = 0; i < n; i++)
//     cin >> arr[i];

//   // Compute suffix sums in vector 'vec'
//   vector<long long> vec(n);
//   long long s = 0;
//   for (long long i = n - 1; i >= 0; i--)
//   {
//     vec[i] = s + arr[i];
//     s = vec[i];
//   }

//   // Binary search over the positions in array b (0-indexed)
//   long long l = 0;
//   long long r = n * k - 1;
//   long long indx = -1; // using -1 in case no valid starting position is found

//   while (l <= r)
//   {
//     long long m = l + (r - l) / 2;
//     // Here we pass vec[0] (total sum) as the full-cycle sum
//     if (fun(vec[m % n], n, k, m, x, vec[0]))
//     {
//       indx = m;
//       l = m + 1;
//     }
//     else
//     {
//       r = m - 1;
//     }
//   }

//   cout << (indx + 1) << "\n"; // +1 for converting from 0-indexed to 1-indexed count
// }

// int main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   int t;
//   cin >> t;
//   while (t--)
//   {
//     solve();
//   }
//   return 0;
// }
