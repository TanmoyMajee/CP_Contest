

#include <bits/stdc++.h>
using namespace std;


// void solve()
// {
//   int n;
//   cin >> n ;
//   vector<int> arr(n);
//   for (int i = 0; i < n; i++)
//     cin >> arr[i];
//   // math
//   int y = (arr[0]*n - arr[n-1])/(n*n-1);
//   int x = arr[0]-y*n;
//   // now it over all
//   for(int i=0;i<n;i++){
//     int res  = x*(i+1) + y*(n-(i+1)+1);
//     if(res!=arr[i]){
//       cout<<"NO";return;
//     }
//   }
//   cout<<"YES"<<endl;
// }

// We want to solve:
//    x·i  +  y·(n - i + 1)  =  a[i]   for i=1..n
// In particular, i=1 gives:  x + n·y = a[0]
//            i=n gives:  n·x + y = a[n-1]
//
// From these two endpoints, we derive
//    denominator = (n-1)(n+1) = n^2 – 1
//    numeratorY  = n·a[0]  –  a[n-1]
//    numeratorX  = n·a[n-1] –  a[0]
//
// Then y = numeratorY / denominator  (must divide evenly, and y >= 0)
//      x = numeratorX / denominator  (must divide evenly, and x >= 0)
//
// Finally check all i=1..n:
//    if (x·i + y·(n - i + 1) != a[i-1])  return NO
// otherwise return YES.

void solve()
{
  int n;
  cin >> n;
  vector<long long> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  

  long long N = n;
  long long denom = N * N - 1;
  // (n^2 – 1) fits in 64-bit because n <= 2e5 → n^2 ≤ 4e10 < 2^63.

  if (denom == 0)
  {
    // Sanity check, though for n>=2 we never get denom=0.
    cout << "NO\n";
    return;
  }

  // Compute numerator for y = (n·a[0] - a[n-1]) / (n^2 - 1)
  long long numY = N * arr[0] - arr[n - 1];
  if (numY % denom != 0)
  {
    // Not an integer → impossible
    cout << "NO\n";
    return;
  }
  long long y = numY / denom;
  if (y < 0)
  {
    // y must be nonnegative
    cout << "NO\n";
    return;
  }

  // Compute numerator for x = (n·a[n-1] - a[0]) / (n^2 - 1)
  long long numX = N * arr[n - 1] - arr[0];
  if (numX % denom != 0)
  {
    cout << "NO\n";
    return;
  }
  long long x = numX / denom;
  if (x < 0)
  {
    cout << "NO\n";
    return;
  }

  // Finally, verify that for every i=1..n:
  //    x·i  +  y·(n - i + 1)  ==  arr[i-1]
  for (int i = 1; i <= n; i++)
  {
    // be careful: arr is zero‐based, so arr[i-1] is aᵢ.
    long long value = x * i + y * (N - i + 1);
    if (value != arr[i - 1])
    {
      cout << "NO\n";
      return;
    }
  }

  // If all checks pass, we can explode the array:
  cout << "YES\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}

// D.Retaliation
//     time limit per test2 seconds
//         memory limit per test256 megabytes
//             Yousef wants to explode an array a1,
//     a2,…, an.An array gets exploded when all of its elements become equal to zero.

//           In one operation,
//     Yousef can do exactly one of the following :

//     For every index i
//         in a,
//     decrease ai
//         by i
//             .For every index i
//                 in a,
//     decrease ai
//             by n−i +
//         1
//             .Your task is to help Yousef determine if it is possible to explode the array using any number of operations.

//         Input
//             The first line of the input contains an integer t(1≤t≤104) — the number of test cases.

//         The first line of each test case contains an integer n(2≤n≤2⋅105) — the size of the array.

//         The second line of each test case contains n
//         integers a1,
//     a2,…,
//     an(1≤ai≤109) — the elements of the array.

//     It is guaranteed that the sum of n
//     over all test cases doesn't exceed 2⋅105
//         .

//     Output
//     For each test case,
//     print "YES" if Yousef can explode the array,
//     otherwise output "NO".

//     You can output the answer in any case (upper or lower)
//         .For example,
//     the strings "yEs",
//     "yes",
//     "Yes",
//     and "YES" will be recognized as positive responses.

//         Example
//         InputCopy
//         6 4 3 6 6 3 5 21 18 15 12 9 10 2 6 10 2 5 5 1 2 4 10 7 10 2 16 12 8 20 4 2 52 101 2 10 2 OutputCopy
//         NO
//         YES
//         NO
//         NO
//         YES
//         NO
//         Note
//         In the second test case,
//     we can do the following:

// Perform 1 operation of the first type.The array becomes[20, 16, 12, 8, 4]
//     .Perform 4 operations of the second type.The array becomes[0, 0, 0, 0, 0]
//     .In the first,
//     third, fourth, and sixth test cases, it can be proven that it is impossible to make all elements equal to zero using any number of operations.
