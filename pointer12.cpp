#include<iostream>
using namespace std;
int main()
{
int var=5;
int*ptr;
ptr=&var;
cout<<"var="<<var<<endl;
cout<<"address of var="<<&var<<endl;
return 0;
}