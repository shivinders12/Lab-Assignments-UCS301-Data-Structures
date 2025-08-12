#include <iostream>
#include <string>
                  
using namespace std;
    //    Write a program to find sum of every row and every column in a two-dimensional array.           
int main() {
   
    int arr[2][4]={{1,2,3,4},{5,6,7,8}};
   int sum_row[2];
   int sum_col[4];
   for (int i=0;i<2;i++)
   {
    sum_row[i]=0;
    
    for (int j=0;j<4;j++)
    {
        sum_row[i]=sum_row[i]+arr[i][j];
       
    }
    for (int j=0;j<4;j++)
    {
        sum_col[j]=0;
        for(int i=0;i<2;i++)
        {
        
        sum_col[j]=sum_col[j]+arr[i][j];
        }
    }
   }
   cout<<"Sum of every row is "<<endl;
   for (int i=0;i<2;i++)
   {
    cout<<"Row "<<i+1<<" = "<<sum_row[i]<<endl;
   }
   cout<<"Sum of every column is "<<endl;
   for(int i=0;i<4;i++)
   {

    cout<<"Column "<<i+1<<" = "<<sum_col[i]<<endl;
   }
   

   

    return 0;
}