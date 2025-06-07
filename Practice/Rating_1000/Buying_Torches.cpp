/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int t;
   cin>>t;
   while(t--){
       ll x,y,k;
       cin>>x>>y>>k;
    //   cAL the total stick requires
    ll ts = k + (y*k);
    ll r = 0;
    if((ts-1)%(x-1) !=0 )r++;
    r+= (ts-1)/(x-1);
    cout<<r+k<<endl;
   }

    return 0;
}