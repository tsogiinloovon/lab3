#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int &b = a;
    a++;
    cout << b;
}
