#include<iostream>
using namespace std;
int main()
{
int arr[6]={5,1,9,4,2,3};
int temp;
int n=6;
for (int pass = 0; pass <=n; pass++)
{
    for (int i= 0; i <n-1; i++)
    {
     if(arr[i]>arr[i+1])
     {
         temp=arr[i];
         arr[i]=arr[i+1];
         temp=arr[i+1];
     }
    }
    
}
cout<<"Sorted array is ";
for (int i=0; i<n; i++)
{
 cout<<arr[i]<<",";
}

return 0;
}