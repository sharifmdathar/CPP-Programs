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

    for (int i = l-1; i >= 0; i--) {
        cout<<arr[i]<<",";
    };

    cout<<endl;

    return 0;
}