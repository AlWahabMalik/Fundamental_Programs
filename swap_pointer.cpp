#include<iostream>
using namespace std;
void swap(int*n1,int*n2)
int main()
{
    int a=12,b=18;
    cout<<"before swapping:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    swap(&a,&b);
    cout<<"After Swapping:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
void swap(int*n1,int*n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}