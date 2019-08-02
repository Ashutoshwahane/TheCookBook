#include <iostream>
#include <conio.h>

using namespace std;

class rev
{
private:
    int no,r,sum;
public:
    rev()
    {
    cout<<"Enter a number to be reversed: ";
    cin>>no;
    sum =0;
    while(no>0)
    {
        r=no%10;
        sum=sum*10+r;
        no=no/10;
    }
    cout<<"The reversed number is = "<<sum;
    }
};

int main()
{
    rev obj;
    getch();
    return 0;
}
