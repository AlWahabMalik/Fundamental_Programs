#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char Answer[]="Banana";
char Question[10];
do
{
   cout<<"Enter Your Favourite Fruit: ";
   cin>>Question;
} while (strcasecmp(Answer,Question)!=0);
cout<<"Answer is Correct";
return 0;
}