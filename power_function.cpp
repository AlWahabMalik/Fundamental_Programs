#include<iostream>
using namespace std;
int power(int b, int e);
int main()
{
   int base,exponent;
   cout<<"Enter a base : ";
   cin>>base;
   cout<<"Enter a exponent : ";
   cin>>exponent;
   cout<<power(base,exponent);

return 0;
}
int power(int b, int e)
{
    int r=1;
    for (int  i = 1; i <= e ; i++)
    {
        r=r*b;
    }
    return r;
}