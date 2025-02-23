#include <iostream>
using namespace std;

int main()
{
     char ch;
    cout<<"Enter a Vowel: ";
    cin>>ch;
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<ch<<" is lower case";
        break;
        
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cout<<ch<<" is Upper case";
        break;
        default:
        cout<<"please enter a vowel";
    }   
    return 0;
}