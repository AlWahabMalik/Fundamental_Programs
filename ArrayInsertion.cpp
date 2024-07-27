#include<iostream>
using namespace std;
int main()
{
    int arr[20]={34,32,45,38,23,66};
    int n=6;
    int i;
    int index,value;
     cout<<"Enter index on which You want to insert element ";
    cin>>index;
    cout<<"Enter Element which You want to insert ";
    cin>>value;

    for(i = index; i<=n; i++)
    {
          arr[i+1]=arr[i]; 
          
    }
    arr[index]=value;
               
       
        n++;
    
    cout<<"Array elements are ";
    for(int i = 0; i < n; i++)
    {
     cout<<arr[i]<<" ";
    }
    
}
