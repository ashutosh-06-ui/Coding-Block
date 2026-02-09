#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Counting from 1 to " << N << ":" << endl;
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }

    return 0;
}