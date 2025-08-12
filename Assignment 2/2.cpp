#include <iostream>
#include <string>
                  
using namespace std;
                  
int main() {
    //no of passes is 1 less than the number of elements
    // in every pass one element is placed in its correct position


    int arr[5]={8,1,7,5,2};
    int n=5;

  

    for(int i =1 ; i<n ; i++)
    {
         bool sorted=true;
        for(int j=0;j<=n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                sorted=false;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
          
        }

          if(sorted== true)
            {
                break;
            }
        

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }




    return 0;
}