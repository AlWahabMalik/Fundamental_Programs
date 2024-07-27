#include<iostream>
using namespace std;
int main()
{
int sum=0, ctr=0;  
float avg;
int arr[]={20,40,60,80,30,70,100};
for (int i = 0; i < 7; i++)
{
    sum=sum+arr[i];
    ctr++;
}
{
cout<<"Sum is = "<<sum<<endl;
}
avg=sum/ctr;
{
    cout<<"Avaerage is ="<<avg;
}
return 0;
}