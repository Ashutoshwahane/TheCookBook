#include <iostream>
#include <conio.h>

using namespace std;

class EvenOdd
{
private:
    int a;
public:
   EvenOdd()
    {
        cout<<"Enter a number: ";
        cin>>a;

        if(a % 2 == 0)
            cout<<"It is an Even number";
        else
            cout<<"It is an Odd number";
    }
};
int main()
{
    EvenOdd E;
    getch();
    return 0;
}
