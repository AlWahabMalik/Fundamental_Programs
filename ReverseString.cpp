#include<iostream>
#include<string>
using namespace std;
int main()
{
char str[6];
cout<<"Enter a string";
cin>>str;
for (int i = 1; i<6; i++)
{
    char temp;
    str[i] = temp;
    str[i] = str[5-i];
    temp = str[5-i];
}
cout<<"Reverse string is:";
for (int i=1; i<6; i++)
{
    cout<<str[i];
}
return 0;
}