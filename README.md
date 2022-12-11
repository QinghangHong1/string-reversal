Five implementations of string reversals
========================================

- Iterative implementation

```cpp
    // Usage
    string s = reverse_string_v1("hello");
    cout << s << endl;
```

- Recursive in-place implementation

```cpp
    // Usage
    string s = "hello";
    reverse_string_v2(s);
    cout << s << endl;
```

- Iterative implementation with reverse iterator

```cpp
    // Usage
    string s = reverse_string_v4("hello");
    cout << s << endl;
```

- Iterative implementation with custom class and reverse iterator

``` cpp
    // Usage
    CustomString cs("hello");
    string s = cs.reverse_v4();
    cout << s << endl;
```

- Iterative implementation with reverse iterator

```cpp
    // Usage
    string s = reverse_string_v5("hello");
    cout << s << endl;
```