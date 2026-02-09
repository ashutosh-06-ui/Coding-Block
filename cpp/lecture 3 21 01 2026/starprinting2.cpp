#include<iostream>
using namespace std;
int main() {
    int n =5, i, j;
//     for(i = 0; i < 6; i++) {
//         for(j = 0; j < i ; j++) {
//             cout << "*  ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"1 ";
        cout<<endl;
    }
}