#include <iostream>
#include <conio.h>

using namespace std;

class facto
{
    int no,i,fact;
public:
    facto()
    {
        fact = 1;
        cout<<"Enter the number:";
        cin>>no;
        for(i=1; i<=no; i++)
        {
            fact = fact * i;
        }
        cout<<"Factorial="<<fact;
    }
};
int main()
{
    facto obj;
    getch();
    return 0;
}
