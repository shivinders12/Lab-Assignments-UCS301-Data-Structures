#include <iostream>
#include <string>
                  
using namespace std;
                  
int main() {
    // Design the Logic to Find a Missing Number in a Sorted Array.

    int arr[5]={1,2,3,5,6};
    int n= 5;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
             cout<<i;
            break;
           
        }
        

        
    }

    return 0;
}