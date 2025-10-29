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
