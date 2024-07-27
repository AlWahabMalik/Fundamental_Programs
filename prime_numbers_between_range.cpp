
#include<iostream>
using namespace std;
int main()
{
int start,end,ctr=0;
cout<<" Enter Starting number : ";
cin>>start;
cout<<"Enter ending number : ";
cin>>end;
cout<<"Prime Numbers Between "<<start<<" and "<<end<<" are :";
for(int n= start; n<=end; n++)
{
for (int i = 2; i <=n/2; i++)
{
  if (n%i==0)
  {
    ctr++;
    break;
  }
  }
}
  if (ctr>0)
  {
    cout<<ctr;
  }
return 0;
}