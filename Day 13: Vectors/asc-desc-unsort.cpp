#include<iostream>
#include<vector>
using namespace std;

int main() {

    a);

    for (int i = 0; i < v.size(); i++) {
        cin>>v[i];
    }

    bool asc = true;
    bool desc = true;

    for (int i = 0; i < v.size()-1; i++) {
        if (asc == false && desc == false) {
            break;
        } else if (v[i] < v[i+1]) {
            desc = false;
        } else if (v[i] > v[i+1]) {
            asc = false;
        }
    }

    if (asc) {
        cout<<"Ascending"<<endl;
    } else if (desc) {
        cout<<"Descending"<<endl;
    } else {
        cout<<"Not Sorted"<<endl;
    }

    return 0;
}
