#include<iostream>
using namespace std;

int main() {
    
    int a;
    cin>>a;

    int f = 1;
    for (int i = a; i > 1; i--) {
        f *= i;
    }

    cout<<f<<endl;

    return 0;
}