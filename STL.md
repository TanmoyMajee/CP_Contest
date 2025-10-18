# C++: Parse Array Input with Brackets and Commas

This code reads a single line of integers, removes brackets `[` `]` and commas `,`, and stores the numbers in a vector.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    getline(cin, line);      // Read one full line

    vector<int> v;
    int a;
    
    // Clean brackets and commas
    for (char &c : line) {
        if (c == '[' || c == ']' || c == ',') c = ' ';
    }
    
    // Create stringstream after cleaning
    stringstream ss(line);
    
    // Extract integers from the stream
    while (ss >> a) 
        v.push_back(a);

    // Print the vector elements
    for (int x : v) 
        cout << x << " ";

    return 0;
}
````
Sample Input
[12 , 2 , 152 2 0 20 ,3,4,45 5 15]

Sample Output
12 2 152 2 0 20 3 4 45 5 15
