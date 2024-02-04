#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the x co_ordinate : ";
    cin>>x;
    cout<<"Enter the y co_ordinate : ";
    cin>>y;
    if(x==0 && y==0)
    {
        cout<<"the line passes through the origin";
    }
    else if(x==0)
    {
    cout<<"the line passes through y origin";
    }
     else if(y==0)
    {
    cout<<"the line passes through x origin";
    }
    else{
    {
    cout<<"the line is  invalid ";
    }
    }
    
}