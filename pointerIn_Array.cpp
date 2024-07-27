#include<iostream>
using namespace std;
int main()
{
int arr[5]={45,34,12,67,98};
int*ptr;
ptr=arr;
cout<<*ptr<<endl;
cout<<*(ptr+1)<<endl;
cout<<*(ptr+2)<<endl;
cout<<*(ptr+3)<<endl;
cout<<*(ptr+4)<<endl;
return 0;
}