#include<iostream>
using namespace std;
int main() {
    int n = 5 ,i, j;
    for(i = 1; i <=n; i++) {
        for(j = 1; j <=n-i ; j++) {
            cout << " ";
        }
        for(j = 1; j <=i ; j++) {
            if(j%2!=0){
            cout << "*";
            }
            else{
                cout << "!";
            }
        }
        for(j = 2; j <=i ; j++) {
            if((j+i)%2!=0){
                cout << "!";
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}