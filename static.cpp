#include<iostream>
using namespace std;
void func();
int main()
{
  func();
  func();
  func();
return 0;
}
void func()
{
   static int v=0;
   v++;
   cout<<v<<" _ Good morning mam ! "<<endl;
}