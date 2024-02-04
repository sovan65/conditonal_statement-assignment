#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the first marks: ";
    cin>>a;
     cout<<"Enter the second marks: ";
    cin>>b;
    cout<<"Enter the third marks: ";
    cin>>c;
    if((a<b) && (b<c))
    {
        cout<<a<<" is the least";
    }
    else if((b<a) &&  (a<c))
    {
        cout<<b<<" is the least";
    }
     else if((c<a) &&  (a<b))
    {
        cout<<c<<" is the least";
    }
    
}