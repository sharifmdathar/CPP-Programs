#include<iostream>
using namespace std;

int main() {
    
    for (int i = 100; i <= 500; i++) {
        
        int s = 0;
        int k = i;

        while (k>0) {
            int d = k % 10;
            k = k / 10;
            s += (d*d*d);
        }

        if (s==i) {
            cout<<s<<endl;
        }
    }



    return 0;
}