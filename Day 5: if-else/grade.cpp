#include<iostream>
using namespace std;

int main() {

    cout<<"Enter Your Marks : ";
    int m;
    cin >> m;

    cout<<"Your Grade is ";

    if (m>=100 || m<0) {
        cout<<"undefined\n";
    } else if (m>=90) {
        cout<<"A+\n";
    } else if (m>=80) {
        cout<<"A\n";
    } else if (m>=70) {
        cout<<"B+\n";
    } else if (m>= 60) {
        cout<<"B\n";
    } else if (m>= 50) {
        cout<<"C\n";
    } else if (m>= 40) {
        cout<<"D\n";
    } else if (m>= 30) {
        cout<<"E\n";
    } else if (m>= 0) {
        cout<<"F\n";
    }
    
    return 0;

}