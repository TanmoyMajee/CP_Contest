````cpp
#include <bits/stdc++.h>
using namespace std;

// ::  spcre resolution operatort

void p1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1 ; j<=i ; j++)
        // cout<<"*";
        cout<<i;
        cout<<endl;
    }
}

void p5(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
}

void p7(int n){
    for(int i =1;i<=n;i++ ){
        // spc
        for(int j=1;j<=n-i;j++)cout<<" ";
        for(int j=1;j<=i*2 - 1;j++)cout<<"*";   // VVI
         for(int j=1;j<=n-i;j++)cout<<" ";
         cout<<endl;
    }
}

void p8(int n){
    for(int i =1;i<=n;i++ ){
        // spc
        for(int j=1;j<i;j++)cout<<" ";
        for(int j=1;j<=2*n - (i*2 - 1);j++)cout<<"*";   // VVI
         for(int j=1;j<i;j++)cout<<" ";
         cout<<endl;
    }
}

void merge_p7_p8(int n){
    
    // Front part
     for(int i =1;i<=n;i++ ){
        // spc
        for(int j=1;j<=n-i;j++)cout<<" ";
        for(int j=1;j<=i*2 - 1;j++)cout<<"*";   // VVI
         for(int j=1;j<=n-i;j++)cout<<" ";
         cout<<endl;
    }
    // back part
    for(int i =1;i<=n;i++ ){
        // spc
        for(int j=1;j<i;j++)cout<<" ";
        for(int j=1;j<=2*n - (i*2 - 1);j++)cout<<"*";   // VVI
         for(int j=1;j<i;j++)cout<<" ";
         cout<<endl;
    }
}

void p10(int n){
    for(int i =1;i<=n*2 - 1;i++ ){
        int str = i;
        if(i>n)str=2*n-i; // VVI
        for(int j=1;j<=str;j++)cout<<"*";
         cout<<endl;
    }
}

void p11(int n){
    for(int i=1;i<=n;i++){
        bool flag;
        if(i%2 == 1)flag = true;
        else flag = false;
        for(int j=1 ; j<=i ; j++){
            if(flag)cout<<1;
            else cout<<0;
            flag = !flag;
        }
        cout<<endl;
    }
}



void p12(int n){
    int spc = n*2 - 2; // VVI
    for(int i =1;i<=n;i++ ){
        // spc
        for(int j=1;j<=i;j++)cout<<j;
        for(int j=1;j<=spc;j++)cout<<" ";   // VVI
         for(int j=i;j>=1;j--)cout<<j;
         cout<<endl;
         spc-=2;
    }
}

void p13(int n){
    for(int i=1;i<=n;i++){
        for(int j=0 ; j<i ; j++){
            char ch = 'A' + j;
            cout<<ch;
        }
        // cout<<"*";
        cout<<endl;
    }
}



void p14(int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i;j++){
            char ch = 'A' + j;
            cout<<ch;
            
        }
        cout<<endl;
    }
}

int main()
{
    // std::cout<<"Hello World";
    // p1(5);
    // p5(5);
    // p7(5);
    // p8(8);
    // merge_p7_p8(5);
    // p10(5);
    // p11(5);
    // p12(6);
    // p13(6);
    p14(6);
    return 0;
}
````

```cpp
#include <bits/stdc++.h>
using namespace std;

void p1(int n){
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){  // 0 1 2 3 4 (i==5)
            char ch = 'A' + j;
            cout<<ch;
        }
        cout<<endl;
    }
}

void p2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){  // 0 1 2 3 4 (i==5)
            char ch = 'A' + i;
            cout<<ch;
        }
        cout<<endl;
    }
}

void p5(int n){
    for(char ch ='A' ; ch<='A' + (n-1);ch++){
        for(char ch1 ='A' ; ch1<=ch;ch++)
        cout<<ch;
        cout<<endl;
    }
}

void p3(int n){
    for(int i=1;i<=n;i++){
        // spc 
        for(int j=1;j<=n-i;j++)cout<<" ";
        int cnt = 0;
        for(int j=0;j<2*i - 1;j++){
            char ch = 'A' + cnt;
            cout<<ch;
            if(j>=(2*i - 1)/2)cnt--;
            else cnt++;
        }
        for(int j=1;j<=n-i;j++)cout<<" ";
        cout<<endl;
    }
}


void p6(int n){
    for(int i=0;i<n;i++){
        char ch = 'A' + (n-i-1);  // A + (4 , 3 2 1 )
         for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

void p7(int n){
    // upper ( str ,spc ,str)
    int cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++)cout<<"*";
        for(int j=1;j<=cnt;j++)cout<<" ";
        for(int j=1;j<=n-i+1;j++)cout<<"*";
        cnt+=2;
        cout<<endl;
    }
    
    // lower
    cnt = 2*n -2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)cout<<"*";
        for(int j=1;j<=cnt;j++)cout<<" ";
        for(int j=1;j<=i;j++)cout<<"*";
        cnt-=2;
        cout<<endl;
    }
}


void p10(int n){
     int spc = 2*n - 2;
for(int i=1;i<=2*n-1;i++){
        // str , spc str
        int str = i ;
        if(i>n)str=2*n-i;
        
        for(int j=1;j<=str;j++)cout<<"*";
        for(int j=1;j<=spc;j++)cout<<" ";
        for(int j=1;j<=str;j++)cout<<"*";
        //spc ++ , --
        if(i>=n)spc+=2;
        else spc-=2;
        cout<<endl;
    }
}

int main()
{
    // std::cout<<"Hello World";
    // p1(6);
    // p2(7);
    // p3(6);
    // p5(5);
    // p6(6);
    // p7(5);
    p10(5);
    return 0;
}
````
