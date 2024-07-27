#include<iostream>
using namespace std;
int main()
{
    int product=1;
int arr[]={54,3,65};
int ctr=0;
     for(int i=0; i<3; i++)
    {
    product=product*arr[i];
    ctr++;
    }
cout<<"Product of array elements are"<<product<<endl;
cout<<"total elements of array are"<<ctr;
return 0;
}