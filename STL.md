# C++: Parse Array Input with Brackets and Commas

This code reads a single line of integers, removes brackets `[` `]` and commas `,`, and stores the numbers in a vector.
```cpp
#include <bits/stdc++.h>
#include<sstream>
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
     //while(getline(ss,t,' ')){  
      //  cout<<t<<"->";
    //}
    // Print the vector elements
    for (int x : v) 
        cout << x << " ";

    return 0;
}
````
Sample Input
12 , 2 , 152 2 0 20 ,3,4,45 5 15

Sample Output
12 2 152 2 0 20 3 4 45 5 15

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {  // Reads until no more input
        cout << n << "\n";
    }
}
```
Sample Input
[ 12 , 2 , 152 2 0 20 ,3,4,45 5 15 ] , { 12,5,8,6}

Sample Output
12 2 152 2 0 20 3 4 45 5 15

**THis Appch will work for all **
```cpp
#include <iostream>
#include <cctype>     // for isdigit
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    
   cout<<"Enter array as string: ";
	string s;
	getline(cin,s);
	
	vector<int>arr;
	string num="";
	
	for(char ch:s)
	{
		if(isdigit(ch)||ch=='-') // if decime then add || ch=='.'
		{
			num+=ch;
		}
		
		else if(!num.empty())
		{
			arr.push_back(stoi(num));
			num="";
		}
	}
	
	if(!num.empty())
	{
		arr.push_back(stoi(num)); // stod(num)
	}
	
	for(auto it : arr)cout<<it<<" ";
    return 0;
}
```
  #include<sstream> for stringstrem 
   stod() str to decimel
  
Matrix given line by line (each row in a line)
🧩 Example Input:
1 0 1
0 1 0
1 1 0


👉 No n or m given. 

✅ Code:
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    vector<vector<int>> matrix;

    while (getline(cin, line)) {        // read until EOF
        if (line.empty()) break;        // stop if blank line (optional)
        stringstream ss(line);
        vector<int> row;
        int val;
        while (ss >> val) row.push_back(val);
        matrix.push_back(row);
    }

    // ✅ Print matrix
    for (auto &row : matrix) {
        for (auto &x : row) cout << x << " ";
        cout << "\n";
    }
}
```
📘 Handles:
[[1,2,3],[4,5,6]], { {1,2},{3,4} }, (1,2,3)(4,5,6)
✅ Works for integers, negatives, and decimals
Input inside brackets or parentheses
```cpp
string s;
getline(cin, s);
vector<vector<double>> mat;
vector<double> row;
string num = "";

for (char ch : s) {
    if (isdigit(ch) || ch == '-' || ch == '.')
        num += ch;
    else if (!num.empty()) {
        row.push_back(stod(num));
        num = "";
    }
    if (ch == ']' || ch == ')') {
        if (!row.empty()) {
            mat.push_back(row);
            row.clear();
        }
    }
}
````

