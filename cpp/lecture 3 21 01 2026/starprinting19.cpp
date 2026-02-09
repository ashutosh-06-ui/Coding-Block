#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int mid = n / 2 + 1;

    for(int i = 1; i <= n; i++) {          // rows
        for(int j = 1; j <= n; j++) {      // columns

            // first row or last row → full stars
            if(i == 1 || i == n) {
                cout << "* ";
            }
            // left and right star blocks
            else if(j <= abs(mid - i) + 1 || j > n - (abs(mid - i) + 1)) {
                cout << "* ";
            }
            // middle spaces
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
