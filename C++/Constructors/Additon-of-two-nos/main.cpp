#include <iostream>
#include <conio.h>

using namespace std;

class Add
{
    int a, b;
public:

    Add()
    {
        cout<<"Enter first number:";
        cin>>a;
        cout<<"Enter second number:";
        cin>>b;

        cout<<"Addition of Entered numbers is = "<<(a+b);
    }
};
int main()
{
    Add A;
    getch();
    return 0;
}
