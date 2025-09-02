#include <iostream>
#include <string>
                  
using namespace std;


class triplet
{
    public:
    int i;
    int j;
    int value;

};

triplet arr[10];
triplet arr2[10]= {
  {0,0,1},
  {0,2,2},
  {1,1,3},
  {2,1,5}
};
triplet arr3[10]={
  {0,1,3},
  {1,0,1},
  {2,0,4},
  {2,1,5}
};


void read( int index,int i, int j, int value)
{
    
    arr[index].i = i;
    arr[index].j = j;
    arr[index].value = value;


}
     

void printTriplets(int n) {
    cout << "\nTriplet Representation:\n";
    cout << "Row\tCol\tValue\n";
    for (int k = 0; k < n; k++) {
        cout << arr[k].i << "\t" 
             << arr[k].j << "\t" 
             << arr[k].value << "\n";
    }
}

void transpose(int n)
{
    for(int i=0; i<n;i++)
    {
        int temp;
        temp=arr[i].i;
        arr[i].i=arr[i].j;
        arr[i].j=temp;
    }

    cout<<"The Transpose is";

    printTriplets(n);



}



int main() {
    cout<<"Enter the no of triplets";
    int n;
    cin>>n;
    

    cout<<"Enter the Sparse Matrix"<<endl;
    for(int ind=0; ind<n;ind++)
    {
        cout<<"Enter the "<<ind+1<<" triplet"<<endl;
        int i, j, value;
        cin >> i >> j >> value; 
        read(ind,i,j,value);
    }
    printTriplets(n);
    // transpose(n);
    
    return 0;
}