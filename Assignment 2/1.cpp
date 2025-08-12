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
        int m=(max+min)/2;
        if (a==arr[m]){
            cout <<"Element found at index "<<m;
            found=true;
            break;
    

        }
        else if ( a < arr[m] )

        {
            max= m-1;
        }

        else{
            min = m+1;
        }

    }
    if (found== false)
    {
        cout<<"The element is not found in the array";
    }




    return 0;
}