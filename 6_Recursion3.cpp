#include <iostream>
using namespace std;

// Function to print from 1 to n without using +
void f(int n) {
    // Base case: stop when n is 0
    if (n == 0) {
        return;
    }

    // Recursive call with n-1 (uses subtraction, not addition)
    f(n - 1);

    // Print n after the recursive call returns
    // This ensures numbers are printed in ascending order (1, 2, ..., n)
    cout << n << " ";
}

int main() {
    int N;
    cin >> N;
    f(N); // Pass N directly
    return 0;
}