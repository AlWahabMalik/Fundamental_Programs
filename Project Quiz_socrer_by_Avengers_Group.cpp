#include <iostream>
#include <cstring>
using namespace std;
void Questions();
void mcqs1(char);
void mcqs2(char);
void mcqs3(char);
void mcqs4(char);
void mcqs5(char);
void mcqs6(char);
void mcqs7(char);
void mcqs8(char);
void mcqs9(char);
void mcqs10(char);
float counter = 0;

int main()
{
     string name;
     char choice;
     cout<<"Group Memembers \n\t Yasir Mustafa\tAbdul Wahab\t Hassan Khan baloch\tAsad kamal\tAbdul Sattar\tSami ullah khan "<<endl;
     cout << "***********Quiz Socrer********** " << endl
          << endl;
     cout << "\n Enter Your name : ";
     getline(cin, name);
     cout << "Do You want to start Quiz (Y for Yes or N or No) ? ";
     cin >> choice;
     if (choice == 'y' || choice == 'Y')
     {
          Questions();
          cout << "Dear " << name << endl;
          cout << "YOur total Score is : " << counter << endl;
          if (counter >= 0 && counter < 5)
          {
               cout << "Not so stisfactory ! " << endl;
          }
          else if (counter >= 5 && counter <= 7)
          {
               cout << "Average Performance " << endl;
          }
          else if (counter > 7 && counter < 10)
          {

               cout << "Good Perfoe=rmance " << endl;
          }
          else if (counter == 10)
          {
               cout << " \n Perfect " << endl;
          }
     }
     else
     {
          cout << "You Has Miss the Quiz ! " << endl;
     }
     return 0;
}
void Questions()
{
     char option;
     string text="aAbBCcDd";
	int found;
     cout << "Question No.01 : What is full form of OOP : " << endl;
     cout << "\n A : Oriented object Programming " << endl;
     cout << "   B : Office oriented Programming " << endl;
     cout << "   C : Office Object Programming " << endl;
     cout << "   D : Object Oriendted Programming  " << endl;
     
     do{
		cin >> option;
		found=text.find(option);
	}while(found==string::npos);
     mcqs1(option);

     cout << "\n Question No 2 : What is the output of below Porgram " << endl
          << endl;
     cout << "int main()" << endl
          << "{" << endl
          << " int a=10; " << endl
          << " cout<<a++; " << endl;
     cout << " return 0 " << endl
          << " } " << endl;
     cout << "\n A : 10 " << endl;
     cout << "   B : 11 " << endl;
     cout << "   C : 12 " << endl;
     cout << "   D : Not defined ! " << endl;
     do{
		cin >> option;
		found=text.find(option);
	}while(found==string::npos);
     mcqs2(option);

     cout << "Question No 3 : What is the output of below Porgram " << endl
          << endl;
     cout << "int main()" << endl
          << "{" << endl
          << " int a, b=20 ; " << endl;
     cout << "a=85/b;" << endl
          << " cout<<++a; " << endl;
     cout << " return 0 " << endl
          << " } " << endl;
     cout << "\n A : 4 " << endl;
     cout << "   B : 5 " << endl;
     cout << "   C : 4.5 " << endl;
     cout << "   D : Compilation Error ! " << endl;
     do{
		cin >> option;
		found=text.find(option);
	}while(found==string::npos);
     mcqs3(option);
     cout << "Question No 4 : What is the output of below Porgram " << endl
          << endl;
     cout << "int main()" << endl
          << "{" << endl
          << " int a=10; " << endl
          << " cout<<++a; " << endl;
     cout << " return 0 " << endl
          << " } " << endl;
     cout << " \nA : 10 " << endl;
     cout << "   B : 11 " << endl;
     cout << "   C : 12 " << endl;
     cout << "   D : Not defined ! " << endl;
     do{
		cin >> option;
		found=text.find(option);
	}while(found==string::npos);
     mcqs4(option);

     cout << "Question No 5 : What is the output of below Porgram " << endl
          << endl;
     cout << "int main()" << endl
          << "{" << endl
          << " int a=10; " << endl
          << endl
          << "++a; "
          << " \n a-2; "
          << " \n cout<<++a; " << endl;
     cout << " return 0 " << endl
          << " } " << endl;
     cout << "\n A : 10 " << endl;
     cout << "   B : 11 " << endl;
     cout << "   C : 12 " << endl;
     cout << "   D : 9 ! " << endl;
     do{
		cin >> option;
		found=text.find(option);
	}while(found==string::npos);
     mcqs5(option);

     cout << "Question No.06 : What is size of int data type in cpp : " << endl;
     cout << " \nA : 2 byte " << endl;
     cout << "   B : 4 byte " << endl;
     cout << "   C : 6 byte" << endl;
     cout << "   D : 8 byte  " << endl;
     do{
		cin >> option;
		found=text.find(option);
	}while(found==string::npos);
     mcqs6(option);

     cout << "Question No.07 : Which Operator has highest precedence : " << endl;
     cout << "\n A : () " << endl;
     cout << "   B : ++ " << endl;
     cout << "   C : = " << endl;
     cout << "   D : *  " << endl;
     cin >> option;
     mcqs7(option);

     cout << "Question No.08 : int v=3^3; value of v will be ? : " << endl;
     cout << "\n A : 0 " << endl;
     cout << "   B : 9 " << endl;
     cout << "   C : Depend on compiler " << endl;
     cout << "   D : syntax error  " << endl;
     do{
		cin >> option;
		found=text.find(option);
	}while(found==string::npos);
     mcqs8(option);

     cout << "Question No.09 : what data type will 3.0/8-2 return ? : " << endl;
     cout << "\n A : int " << endl;
     cout << "   B : float " << endl;
     cout << "   C : Depend on compiler " << endl;
     cout << "   D : syntax error  " << endl;
     do{
		cin >> option;
		found=text.find(option);
	}while(found==string::npos);
     mcqs9(option);

     cout << "Question No 10 : What is the output of below Porgram " << endl
          << endl;
     cout << "int main()" << endl
          << "{" << endl
          << " int a=10; " << endl
          << endl
          << "int* ptr_a, ptr_ptr; "
          << " \n ptr_a=&a; "
          << " \n ptr_ptr=&ptr_a; "
          << " \n cout<<*(&ptr_ptr); " << endl;
     cout << " return 0 " << endl
          << " } " << endl;
     cout << "\n A : Address of ptr_ptr " << endl;
     cout << "   B : Address of ptr_a " << endl;
     cout << "   C : Address of a " << endl;
     cout << "   D : depend on compiler " << endl;
     do{
		cin >> option;
		found=text.find(option);
	}while(found==string::npos);
     mcqs10(option);
}
void mcqs1(char F_A)
{
     if (F_A == 'd' || F_A == 'D')
     {
          cout << "Your Answer is correct ! " << endl;
          counter++;
     }
     else
     {
          cout << "Your Answer is incorrect ! " << endl
               << endl;
          cout << "Correct Answer is : D " << endl;
          counter=counter-0.25;
     }
}
void mcqs2(char S_A)
{
     if (S_A == 'a' || S_A == 'A')
     {
          cout << "Your Answer is correct ! " << endl
               << endl;
          counter++;
     }
     else
     {
          cout << "Your Answer is incorrect ! " << endl
               << endl;
          cout << "Correct Answer is : A " << endl;
          counter -= 0.25;
     }
}
void mcqs3(char T_A)
{
     if (T_A == 'b' || T_A == 'B')
     {
          cout << "Your Answer is correct ! " << endl
               << endl;
          counter++;
     }
     else
     {
          cout << "Your Answer is incorrect ! " << endl
               << endl;
          cout << "Correct Answer is : B " << endl;
          counter -= 0.25;
     }
}
void mcqs4(char F_A)
{
     if (F_A == 'b' || F_A == 'B')
     {
          cout << "Your Answer is correct ! " << endl
               << endl;
          counter++;
     }
     else
     {
          cout << "Your Answer is incorrect ! " << endl
               << endl;
          cout << "Correct Answer is : B " << endl;
          counter -= 0.25;
     }
}
void mcqs5(char fifth_A)
{
     if (fifth_A == 'c' || fifth_A == 'C')
     {
          cout << "Your Answer is correct ! " << endl
               << endl;
          counter++;
     }
     else
     {
          cout << "Your Answer is incorrect ! " << endl
               << endl;
          cout << "Correct Answer is : C " << endl;
          counter -= 0.25;
     }
}
void mcqs6(char six_A)
{
     if (six_A == 'b' || six_A == 'B')
     {
          cout << "Your Answer is correct ! " << endl
               << endl;
          counter++;
     }
     else
     {
          cout << "Your Answer is incorrect ! " << endl
               << endl;
          cout << "Correct Answer is : B " << endl;
          counter -= 0.25;
     }
}
void mcqs7(char seventh_A)
{
     if (seventh_A == 'a' || seventh_A == 'A')
     {
          cout << "Your Answer is correct ! " << endl
               << endl;
          counter++;
     }
     else
     {
          cout << "Your Answer is incorrect ! " << endl
               << endl;
          cout << "Correct Answer is : A " << endl;
          counter -= 0.25;
     }
}
void mcqs8(char eight_A)
{
     if (eight_A == 'a' || eight_A == 'A')
     {
          cout << "Your Answer is correct ! " << endl
               << endl;
          counter++;
     }
     else
     {
          cout << "Your Answer is incorrect ! " << endl
               << endl;
          cout << "Correct Answer is : A " << endl;
          counter -= 0.25;
     }
}
void mcqs9(char nine_A)
{
     if (nine_A == 'b' || nine_A == 'B')
     {
          cout << "Your Answer is correct ! " << endl
               << endl;
          counter++;
     }
     else
     {
          cout << "Your Answer is incorrect ! " << endl
               << endl;
          cout << "Correct Answer is : B " << endl;
          counter -= 0.25;
     }
}
void mcqs10(char ten_A)
{
     if (ten_A == 'b' || ten_A == 'B')
     {
          cout << "Your Answer is correct ! " << endl
               << endl;
          counter++;
     }
     else
     {
          cout << "Your Answer is incorrect ! " << endl
               << endl;
          cout << "Correct Answer is : B " << endl;
          counter -= 0.25;
     }
}
