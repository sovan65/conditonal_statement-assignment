#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the length";
    cin>>a;
    cout<<"Enter the breadth";
    cin>>b;
    int c=a*b;
    cout<<c<<endl;
    int d=2*(a+b);
    cout<<d<<endl;
    if(c>d)
    {
        cout<<"the area of the rectangle is high"<<endl;
    }
    else
    {
         cout<<"the circumference of the rectangle is high"<<endl;
    }
}