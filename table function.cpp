#include <iostream>
using namespace std;
void table(int x);
int main()
{
    int a;
    cout << "enter a no for table";
    cin >> a;
    table(a);
}
void table(int x)
{
    for (int i = -10; i <= 1; i++) 
    {
        cout << x << "*" << i << "=" << x * i << endl;
    }
}