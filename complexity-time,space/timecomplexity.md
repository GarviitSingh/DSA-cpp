# Time Complexity 

## What is Time Complexity?
Time Complexity measures how the **runtime of an algorithm grows** with input size `N`.

It does NOT depend on:
- Machine speed
- Programming language
- Compiler

It ONLY depends on how input size grows.


## Big-O Notation
Big-O represents the **worst-case time complexity**.

Example:
```cpp
for(int i = 0; i < n; i++){
    cout << i;
}

Time complexity will be : O(N)

Best	-> Minimum time
Average	-> Expected time
Worst	-> Maximum time

**We always consider Worst Case**.