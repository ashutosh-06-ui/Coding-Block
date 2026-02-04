#include<iostream>
using namespace std;
int main() {
    int n = 7, i, j;
    for(i = 1; i <=n; i++) {
        for(j = 1; j <=i ; j++) {
            cout << "* ";
        }
        for(j = 1; j <= (2*i-1) ; j++) {
            cout << "   ";
        }
        for(j = 1; j <=i ; j++) {
            cout << "* ";
        }
        for(i = 1; i <=n-i; i++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}