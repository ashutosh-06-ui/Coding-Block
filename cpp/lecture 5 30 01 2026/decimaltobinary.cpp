#include<iostream>
using namespace std;

int main(){
    int decimal, binary = 0,base =1,rem;
    cin>>decimal;
    while(decimal > 0){
        rem = decimal % 2;
        binary = binary + rem * base;
        base = base * 10;
        decimal = decimal / 2;
}
cout<<binary<<endl;
return 0;
}