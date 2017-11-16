#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float sum=0,dundaj;
    float *pointer=NULL;
    cout<<"n:";
    cin>>n;
    pointer=new float[n];
    int utga;
    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>utga;
        cout<<endl;
        *(pointer+i)=utga;
        sum+=utga;
    }
    dundaj=sum/n;
    cout<<"dundaj="<<dundaj;
    delete pointer;
}
