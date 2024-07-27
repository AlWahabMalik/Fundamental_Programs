#include<iostream>
using namespace std;
int main()
{
	int num,positive=0,negative=0,zero=0;
	char ch;
	cout<<"do you want to continue";
	cin>>ch;
	while(ch=='y'||ch=='Y')
	{
		cout<<"enter a number";
		cin>>num;
		if(num=0)
		{
			zero++;
		}
		else if(num>0)
		{
			positive++;
		}
		else if(num<0)
		{
			negative++;
		}
		cout<<"do you want to continue";
		cin>>ch;
	}
	cout<<"number of zero"<<zero<<endl;
	cout<<"number of postive integer"<<positive<<endl;
	cout<<"number of negative"<<negative<<endl;
}
