#include <iostream>
#include <string>
                  
using namespace std;
                  
int main() {
    
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int size= sizeof(arr)/sizeof(arr[0]);
    int a;
    cout<<"Enter the elemant to search: ";
    cin>>a;
    bool found =false;
    int min = 0;
    int max = size-1;
    
   
    while (min<=max)
    {
        int mid=(max+min)/2;
        if (a==arr[mid]){
            cout <<"Element found at index "<<mid;
            found=true;
            break;
    

        }
        else if ( a < arr[mid] )

        {
            max= mid-1;
        }

        else{
            min = mid+1;
        }

    }
    if (found== false)
    {
        cout<<"The element is not found in the array";
    }




    return 0;
}