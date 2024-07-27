 #include<iostream>
 #include<cstring>
 using namespace std;
 int main()
 {
 char fname[10]="Abdul";
 char lname[10]="Wahab";
 char sname[10];

 
 int len;
 strcpy(sname,lname);
 cout<<"user short name is :"<<sname<<endl;
 strcat(fname,lname);
 cout<<"User Complete Name :"<<fname<<endl;
  len=strlen(lname);
  cout<<"length of last name is :"<<len<<endl;
  return 0;
 }