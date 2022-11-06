#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 6, 5, 7, 10, 8, 9};

    for (int i = 0; i<7; i++) {
        bool greatest = true;
        for (int j = 0; j <= i-1; j++) {
            if (arr[j] > arr[i]) {
                greatest = false;
                break;
            }

        if (greatest == false){
            break;
        }            

        bool smallest = true;
        for(int j = i+1; j < 7; j++) {
            if (arr[j] < arr[i]) {
                smallest = false;
            }
        }

        if (smallest == false) {
            break;
        }

        cout<<arr[i]<<endl;
        break;
        }
    }
};