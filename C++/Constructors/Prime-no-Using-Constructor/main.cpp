#include <iostream>
#include <conio.h>

using namespace std;

class Prime
{
    int no , i;
    bool isPrime = true;

public:
    Prime()
    {
        cout<<"Enter An Integer:";
        cin>>no;

        for(i = 2; i <= no/2; i++)
        {
            if(no % i == 0)
            {
                isPrime=false;
                break;
            }
        }
        if(isPrime)
            cout<<"This is Prime number";
        else
            cout<<"This is not Prime number";
    }
};
int main()
{
    Prime P;
    getch();
    return 0;
}
