#include<iostream>
using namespace std;

int main() {
    
    cout<<"No. of elements in Array? ";
    int l;
    cin>>l;

    cout<<"Enter Elements of Array"<<endl;    
    int arr[l];
    for (int i = 0; i < l; i++) {
        cin>>arr[i];
    }
    
    int g = arr[0], s = arr[0];

    for (int el:arr) {
        if (el > g) {
            g = el;
        } else if (el < s) {
            s = el;
        }
    }

    cout<<g+s<<endl;

    return 0;
}