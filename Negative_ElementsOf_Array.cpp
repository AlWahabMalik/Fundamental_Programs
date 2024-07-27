#include<iostream>
using namespace std;
int main()
{
int arr[5],counter=0;
cout<<"Enter 5 numbers";
for(int i= 0; i<5; i++)
{
cin>>arr[i];
}
cout<<endl;
for(int i=0; i<5; i++)
{
if (arr[i]<0)
{
    cout<<"Negative elements are"<<arr[i]<<","<<endl;
    counter++;
}
}
cout<<"Total negative numbers are "<<counter;
return 0;
}