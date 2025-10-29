| Type               | Characters    | ASCII Range |
| ------------------ | ------------- | ----------- |
| Digits             | '0' – '9'     | 48 – 57     |
| Uppercase Letters  | 'A' – 'Z'     | 65 – 90     |
| Lowercase Letters  | 'a' – 'z'     | 97 – 122    |
| Special Symbols    | ' ' – '/'     | 32 – 47     |
|                    | ':' – '@'     | 58 – 64     |
|                    | '[' – '`'     | 91 – 96     |
|                    | '{' – '~'     | 123 – 126   |
| Control Characters | Non-printable | 0 – 31      |
| Delete (DEL)       | —             | 127         |


string s = "hello";

// Reverse
reverse(s.begin(), s.end());   // olleh

// Sort ascending
sort(s.begin(), s.end());      // ehllo

// Sort descending
sort(s.rbegin(), s.rend());    // ollhe


# 🧠 C++ Notes – Struct, Class & ASCII Ranges

## 🔹 `struct` vs `class`

| Feature | struct | class |
|----------|---------|--------|
| Default Access | public | private |
| Syntax | `struct Node { int val; Node* next; };` | `class Node { public: int val; Node* next; };` |
| Library | Built-in keyword (no header needed) | Built-in keyword (no header needed) |

✅ **Both can be used to create linked list nodes.**

Example:
```cpp
// Using struct
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Using class
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};
````

# ⚡ C++ Notes – Lambda Function for Custom Sorting

## 🔹 Creating a Lambda Separately

You can define a **lambda function** separately and then pass it to `sort()`.

### Example 1: Sort Vector of Pairs by Second Element (Descending)
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>> v = {{2,5}, {1,3}, {2,1}};

    // Define lambda separately
    auto comp = [](pair<int,int> &a, pair<int,int> &b) {
        return a.second > b.second;   // sort by second in descending order
    };
      sort(v.begin(), v.end(), greater<int>()); // descending order   ()imp after grter 
    // Use lambda in sort
    sort(v.begin(), v.end(), comp);

    for (auto &p : v)
        cout << p.first << " " << p.second << endl;
}
````

# ⚡ C++ Notes – Min Heap Declaration & Custom Comparator

## 🔹 Basic Min Heap Declaration

```cpp
priority_queue<int, vector<int>, greater<int>> pq;      // ✅ Min-Heap
priority_queue<int, vector<int>, greater<int>()> pq;    // ✅ Also Min-Heap (with parentheses)
auto comp = [](pair<int,int> &a, pair<int,int> &b) {
    return a.second > b.second; // smaller 'second' value gets higher priority
};

priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(comp)> minHeap(comp);
````
