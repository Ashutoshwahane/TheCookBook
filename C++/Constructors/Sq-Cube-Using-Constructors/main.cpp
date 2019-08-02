#include <iostream>
#include <conio.h>

using namespace std;

class check
{
    int no;
public:
    check()
    {
    cout<<"Enter a number:";
    cin>>no;

    cout<<"The square of number is = "<<(no*no)<<endl;
    cout<<"The cube of number is = "<<(no*no*no)<<endl;
    }
};

int main()
{
    check C;
    getch();
    return 0;
}
