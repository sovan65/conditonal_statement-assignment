#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the year";
    cin>>n;
    if(n%4==0)
    {
        cout<<("the year is leaper");
    }
    else
    {
         cout<<("the year is not leaper");
    }
}