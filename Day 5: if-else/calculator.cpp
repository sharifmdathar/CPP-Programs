#include<iostream>
using namespace std;

int main() {

    cout<<"Enter A : ";
    int a;
    cin >> a;

    cout << "Enter Operator : ";
    char op;
    cin >> op;

    cout << "Enter B : ";
    int b;
    cin >> b;

    cout<<a<<" "<< op << " "<< b <<" = ";
    
    switch(op) {
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
    }

    return 0;

}