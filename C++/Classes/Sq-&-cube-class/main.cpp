#include <iostream>
#include <conio.h>

using namespace std;

class chk
{
    int no;
public:
    void display();
};
void chk :: display()
{
    cout<<"Enter a number";
    cin>>no;

    cout<<"The square of number is = "<<(no*no)<<endl;
    cout<<"The cube of number is = "<<(no*no*no)<<endl;
}
int main()
{
    chk C;
    C.display();
    return 0;
}
