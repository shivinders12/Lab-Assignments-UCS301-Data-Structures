#include <iostream>
#include <string>
                  
using namespace std;
                  
int main() {
    // Design the Logic to Find a Missing Number in a Sorted Array.

    int arr[5]={1,2,3,5,6};
    int n= 5;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i+1] - arr[i] != 1) {
            cout << "Missing number: " << arr[i] + 1;
            break; 
        }
    }

    

    return 0;
}