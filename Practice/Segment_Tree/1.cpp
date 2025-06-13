#include <bits/stdc++.h>
using namespace std;

int arr[100];

int build(int l, int r, int indx, vector<int> &vec)
{
  if (l == r)
  {
    arr[indx] = vec[l];
    return vec[l];
  }
  int mid = l + (r - l) / 2;
  int left = build(l, mid, 2 * indx + 1, vec);
  int right = build(mid + 1, r, 2 * indx + 2, vec);
  // return arr[indx] = max(left, right); // ********
  return arr[indx] = max(arr[2 * indx + 1], arr[2 * indx + 2]);
  // if ques is give sum of range then store seg[i]=seg[2*i+1]+seg[2*i+2] , rest is same
}

int search(int l, int r, int qurL, int qurR, int indx)
{
  // case 1 [ compitly lies indise current range ]
  // case 2 [ doesnt lies indise current range]
  // case 3 [ overlap ]
  if (l >= qurL && r <= qurR)
    return arr[indx]; // Complitly lies  [eg {5,7} lies in {3,8}]
  if (r < qurL || l > qurR)
    return INT_MIN; // dont lies [ eg {1,2} doest liew in {3,8}]
                    // now overlap condition                [ eg {5,10} overlap in qur {3,8}]
  int mid = l + (r - l) / 2;
  int left = search(l, mid, qurL, qurR, 2 * indx + 1);
  int right = search(mid + 1, r, qurL, qurR, 2 * indx + 2);
  return max(left, right);
}

int main()
{
  vector<int> vec = {8, 2, 5, 1, 4, 5, 3, 9, 6, 10};
  vector<vector<int> > qur = {{1, 2}, {3, 8}, {5, 10}, {0, 9}, {2, 5}, {6, 10}};
  int n = vec.size();
  build(0, n - 1, 0, vec);
  // now find max val in given range
  for (auto it : qur)
  {
    int l = it[0], r = it[1];
    int ans = search(0, n - 1, l, r, 0);
    cout << "From Rnge[" << l << "-" << r << "]" << " : max elm is :" << ans << endl;
  }
  // int x = search(0,n-1,3,8,0);
  // cout<<x;
  return 0;
}