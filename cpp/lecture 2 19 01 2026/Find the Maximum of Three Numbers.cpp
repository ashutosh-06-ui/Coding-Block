#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    cout << "Maximum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << findMax(num1, num2, num3) << endl;
    return 0;
}