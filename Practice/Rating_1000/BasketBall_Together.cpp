// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{
  // Write C++ code here
  int n, d;
  cin >> n >> d;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  auto lamda = [](int a, int b)
  {
    return a > b;
  };
  sort(arr.begin(), arr.end(), lamda);
  int r = n;
  int cnt = 0;
  for (int i = 0; i < r; i++)
  {
    int j = 1;
    int mul = arr[i] * j;
    while (arr[i] * j <= d && r > i)
    {
      r--;
      if (r <= i)
        break;
      j++;
    }
    if (arr[i] * j > d)
      cnt++;
  }
  std::cout << cnt;

  return 0;
}

// B. Basketball Together
// time limit per test1 second
// memory limit per test256 megabytes
// A basketball competition is held where the number of players in a team does not have a maximum or minimum limit (not necessarily 5
//  players in one team for each match). There are N
//  candidate players in the competition that will be trained by Pak Chanek, the best basketball coach on earth. The i
// -th candidate player has a power of Pi
// .

// Pak Chanek will form zero or more teams from the N
//  candidate players on the condition that each candidate player may only join in at most one team. Each of Pak Chanek's teams will be sent to compete once with an enemy team that has a power of D
// . In each match, the team sent is said to defeat the enemy team if the sum of powers from the formed players is strictly greater than D
// .

// One of Pak Chanek's skills is that when a team that has been formed plays in a match, he can change the power of each player in the team to be equal to the biggest player power from the team.

// Determine the maximum number of wins that can be achieved by Pak Chanek.

// Input
// The first line contains two integers N
//  and D
//  (1≤N≤105
// , 1≤D≤109
// ) — the number of candidate players and the power of the enemy team.

// The second line contains N
//  integers P1,P2,…,PN
//  (1≤Pi≤109
// ) — the powers of all candidate players.

// Output
// A line containing an integer representing the maximum number of wins that can be achieved by Pak Chanek.

// Example
// InputCopy
// 6 180
// 90 80 70 60 50 100
// OutputCopy
// 2
// Note
// The 1
// -st team formed is a team containing players 4
//  and 6
// . The power of each player in the team becomes 100
// . So the total power of the team is 100+100=200>180
// .

// The 2
// -nd team formed is a team containing players 1
// , 2
// , and 5
// . The power of each player in the team becomes 90
// . So the total power of the team is 90+90+90=270>180
// .