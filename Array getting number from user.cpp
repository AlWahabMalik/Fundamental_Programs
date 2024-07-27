#include<iostream>
using namespace std;
int main()
{
int arr[6];
for(int i=0; i<6; i++)
{
cout<<"Enter a number";
cin>>arr[i];
}
cout<<"Numbers entered by the user are"<<endl;
for(int j=0; j<6; j++)
{
cout<<arr[j]<<endl;
}
return 0;
}