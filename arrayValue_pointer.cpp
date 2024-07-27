#include<iostream>
using namespace std;
int main()
{
int arr[5];
int* ptr;
ptr=arr;
cout<<"Enter 5 numbers";
for(int i=0; i<5; i++)
{
cin>>*(ptr+i);
}
cout<<"Reverse order is ";
for(int j=5; j>-1; j--)
{
    cout<<arr[j]<<endl;
}
return 0;
}