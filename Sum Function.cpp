#include <iostream>
using namespace std;
int sum(int a, int b);
int main()
{
    int x = 12, y = 20;
    int s;
    s=sum(x,y);
    cout << s;
    return 0;
}
int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}