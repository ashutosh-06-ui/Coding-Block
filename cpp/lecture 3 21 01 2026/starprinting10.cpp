#include <iostream>
using namespace std;

int main(){
    int n = 5,i,j;
    for (int i = 1; i<=n; i++){
       for (int s = 1; s<i; s++){
           cout << " ";
        }
        for(int j = i; j<n-1 ; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}