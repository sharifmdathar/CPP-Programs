#include<iostream>
using namespace std;

int main() {
    int cp;
    int sp;

    cout<<"Enter C.P. :";
    cin>> cp;

    cout<<"Enter S.P. :";
    cin>> sp;

    if (cp>sp) {
        cout<<"Loss :"<< cp-sp <<endl;
    } else {
        cout<<"Profit :"<< sp - cp << endl;
    }

    return 0;

}