#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122))
    {
        if((ch=='A'|| ch=='a')|| (ch=='E' || ch=='e')||( ch=='I' ||ch=='i')||(ch=='O'|| ch=='o')||(ch=='U'|| ch=='u'))
        {
               cout<<"THE  character is a vowel";
        }
        else
        {

        cout<<"The character is not a vowel but a alphabet";
        }
    }
    else
    {
        if(ch=='!'|| ch=='@'|| ch=='#' || ch=='$'|| ch=='%' )
        {
         cout<<"The character  IS  special character";
        }
        else{
            cout<<"The character is a number";
        }
    }

}