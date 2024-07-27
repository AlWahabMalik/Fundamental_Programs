#include<iostream>
using namespace std;
int main()
{
int sum=0, ctr=0;  
float avg;
int arr[]={20,40,60,80,30,70,100};
for(int i=0; i<7; i++)
{
    cout<<arr[i]<<endl;
    sum=sum+arr[i];
    ctr++;
}
cout<<"Sum of array elements are  "<<sum<<endl;
avg=sum/ctr;
cout<<"Average of arrays elements are  "<<avg;
return 0;
}