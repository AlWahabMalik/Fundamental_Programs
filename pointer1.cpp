#include<iostream>
using namespace std;
int main()
{
int var=5;
int*ptrvar;
ptrvar=&var;
cout<<"var="<<var<<endl;
cout<<""address of var="<<&var<<endl;
cout<<"ptrvar="<<ptrvar<<endl;
cout<<"value of address pointed by ptrvar=(*ptrvar)"<<*ptrvar;
return 0;
}