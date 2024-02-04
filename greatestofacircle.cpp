#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the radius";
    cin>>r;
    int a=3.14*r*r;
    cout<<a<<endl;
    int b=4*3.14*r;
    cout<<b<<endl;
    if(a>b)
    {
        cout<<"the area of the circle is high"<<endl;
    }
    else
    {
         cout<<"the circumference of the circle is high"<<endl;
    }
}