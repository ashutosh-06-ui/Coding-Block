#include <iostream>
using namespace std;

int factorial(int N) {
    if (N == 0 || N == 1) return 1;
    return N * factorial(N - 1);
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Factorial of " << N << ": " << factorial(N) << endl;

    return 0;
}