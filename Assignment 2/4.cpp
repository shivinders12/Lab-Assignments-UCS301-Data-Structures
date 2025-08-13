#include <iostream>
#include <cstring>

using namespace std;

void reverse(string str, int n)
{
    int start =0;
    int end = n-1;
    while(start<=end)
    {
        int temp = str[start];
        str[start] = str[end];
        str[end]= temp;
        start++;
        end--;
    }
    
    cout<<str;
    
}

void deletevowels(string str , int n)
{
    for(int i=0;i<n;i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o'||str[i]=='u')
        {
            for(int j=i+1;j<n;j++)
            {
                str[j-1]=str[j];
            }
            n--;
        }
    }
    str.resize(n);
     cout<<str;
    
}
void sort(string str , int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n -i-1 ; j++) {
            if (str[j] > str[j + 1]) {
                
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    cout<<str;
}
void convert(string str , int n)
{
   
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')  
        {
            str[i] = str[i] + 32;  
        }
        else if (str[i]>='a' && str[i]<='z')
        {
            str[i]= str[i]-32;
        }
    }
    cout<<str;
}
int main()
{
    string str1;
    string str2;
    
    cout<<"Enter a string ";
    cin>>str1;

     int n =str1.length();
     
    //  reverse(str1,n);
    //  deletevowels(str1,n);
    // sort(str1,n);
    convert(str1,n);
    
 
}