#include <iostream>
#include <string>
                  
using namespace std;
           
// Design the logic to remove the duplicate elements from an Array and after the deletion the array should contain the unique elements.
int main() {
    
    int arr[] = {1, 2, 2, 3, 4,};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k = j; k < n-1; k++)
                {
                    arr[k] = arr[k+1];

                }
                n--;
                
            }
           
        }
        

    
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}