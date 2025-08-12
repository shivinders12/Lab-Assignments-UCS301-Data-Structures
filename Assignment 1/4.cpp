#include <iostream>
#include <string>
// Implement the logic to
// a. Reverse the elements of an array
// b. Find the matrix multiplication
// c. Find the Transpose of a Matrix          
using namespace std;
          
void reverseArray(int arr[], int n) {
    cout<<"The reversed array is";

    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int matrixmultiply()
{
    int r1, c1, r2, c2;

    cout << "Enter rows and cols of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and cols of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible (c1 != r2)." << endl;
        return 0;
    }

    int a[r1][c1], b[r2][c2], bT[c2][r2], res[r1][c2];


    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];

   
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];


    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            bT[j][i] = b[i][j];

   
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * bT[j][k]; 
            }
        }
    }
    
    cout << "Resultant matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



int main() {
   
    int arr[5]={1,2,3,4,5};
    int arr2[2][3]={{1,2,3},{4,5,6}};


    int n = sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr,n);
    cout<<"The transpose of matrix is"<<endl;
    int transpose[3][2];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            transpose[j][i]=arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    matrixmultiply();



    



    return 0;
}