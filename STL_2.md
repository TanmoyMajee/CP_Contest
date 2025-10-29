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

struct cmp {
    bool operator()(pair<int,int> &a, pair<int,int> &b) {
        return a.second < b.second;
    }
};

vector<pair<int,int>> v = {{3,5}, {1,2}, {4,1}};
sort(v.begin(), v.end(), cmp());  // pass object of cmp


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


struct compare {
    bool operator()(pair<int,int> &a, pair<int,int> &b) { // operator is fix 
        return a.second > b.second;   // smaller 'second' comes first
    }
};

priority_queue<pair<int,int>, vector<pair<int,int>>, compare> pq;

````

# ⚡ C++ Notes – STL Functions Using `[begin, end)` Range

## 🔹 Rule
Most STL algorithms in `<algorithm>` work on **ranges**:
> `[start, end)` → includes `start`, excludes `end`

So the **second iterator is not an index or count**, it’s the **position after the last element** to process **Not the Size**.

---

## 🔹 Common STL Functions Following `[begin, end)` Rule

| Function | Description |
|-----------|--------------|
| `sort(first, last)` | Sorts elements in ascending order |
| `reverse(first, last)` | Reverses elements in range |
| `rotate(first, middle, last)` | Rotates elements so that `middle` becomes first |
| `count(first, last, val)` | Counts how many times `val` appears |
| `find(first, last, val)` | Finds first occurrence of `val` |
| `max_element(first, last)` | Returns iterator to max element |
| `min_element(first, last)` | Returns iterator to min element |
| `accumulate(first, last, init)` *(from `<numeric>`)* | Sums up elements starting with `init` |
| `unique(first, last)` | Removes consecutive duplicates |
| `lower_bound(first, last, val)` | Returns iterator to first element ≥ val |
| `upper_bound(first, last, val)` | Returns iterator to first element > val |

---

## 🔹 Demo Syntax Examples

```cpp
sort(v.begin(), v.end());                // sort whole vector
reverse(v.begin(), v.begin() + 3);       // reverse first 3 elements
rotate(v.begin(), v.begin() + 2, v.end()); // rotate by 2 positions
count(v.begin(), v.end(), 5);            // count 5s
```
