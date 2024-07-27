#include<iostream>
using namespace std;
int main()
{ int r,num1,num2,sum=0;
cout<<"enter a number";
cin>>num1;
num2=num1;
while(num1>0)
{ r=num1%10;
num1=num1/10;
sum=sum+r;
} 
cout<<"the sum of digits of "<<num2<<"is"<<sum;
}

