#include<iostream>
using namespace std;
void solih(int &s,int &c)
{
 int g;
 g=s;
 s=c;
 c=g;
}
int main()
{
     int a=2,b=3;
     cout<<"a="<<a;
 cout<<"b="<<b;
     solih(a,b);
     cout<<"a="<<a;
     cout<<"b="<<b;
}
