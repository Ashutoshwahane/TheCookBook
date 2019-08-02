#include <iostream>
#include <conio.h>

using namespace std;

class vowel
{
private:
    char ch;
public:
    vowel()
    {
    cout<<"Enter a character \n";
    cin>>ch;

    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout<<ch<<" is a vowel.\n";
        break;
        default:
            cout<<ch<<" is not a vowel.\n";

    }
}

};

int main()
{
    vowel V;
    getch();
    return 0;
}
