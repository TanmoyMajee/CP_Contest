// A. Was there an Array?
// time limit per test2 seconds
// memory limit per test512 megabytes
// For an array of integers a1,a2,…,an
// , we define its equality characteristic as the array b2,b3,…,bn−1
// , where bi=1
//  if the i
// -th element of the array a
//  is equal to both of its neighbors, and bi=0
//  if the i
// -th element of the array a
//  is not equal to at least one of its neighbors.

// For example, for the array [1,2,2,2,3,3,4,4,4,4]
// , the equality characteristic will be [0,1,0,0,0,0,1,1]
// .

// You are given the array b2,b3,…,bn−1
// . Your task is to determine whether there exists such an array a
//  for which the given array is the equality characteristic.

// Input
// The first line contains one integer t
//  (1≤t≤1000
// ) — the number of test es.  

// Each test case consists of two lines:

// the first line contains one integer n(3≤n≤100);
// the second line contains n−2
//     integers b2,
//     b3,…, bn−1(0≤bi≤1).Output For each test case, output YES if the array a exists, or NO if such an array does not exist.Each letter can be printed in any case.

//                                                                                         Example
//                                                                                         InputCopy
//                                                                                         3 10 0 1 0 0 0 0 1 1 3 1 10 0 1 0 1 1 0 0 1 OutputCopy
//                                                                                         YES
//                                                                                         YES
//                                                                                         NO
//                                                                                         Note
//                                                                                         In the first example,
//     the array a = [ 1, 2, 2, 2, 3, 3, 4, 4, 4, 4 ] is suitable.

//                   In the second example,
//               the array a = [ 7, 7, 7 ] is suitable.

// https : //                codeforces.com/contest/2069/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n - 2];
    for (int i = 0; i < n - 2; i++)
    {
      cin >> a[i];
    }
    bool flag = true;
    // now do thw algo
    // only [ 1 0 1 ] is unvalid so find it
    //      1 1 1 0 1
    for (int i = 0; i + 2 < n - 2; i++)
    {
      if (a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 1)
      {
        flag = false;
        break;
      }
    }
    if (flag)
      cout
          << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}