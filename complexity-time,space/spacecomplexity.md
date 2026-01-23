# Space Complexity (Striver A2Z Notes)

## What is Space Complexity?
Space Complexity measures **extra memory used** by an algorithm.

Input memory is NOT counted.



## O(1) – Constant Space
```cpp
int a, b;

void func(int n){
    if(n == 0) return;
    func(n - 1);
}

Each recursive call uses stack memory.
Space Complexity : O(N)