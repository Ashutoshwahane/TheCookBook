#include <iostream>
#include <conio.h>

using namespace std;


class pattern{
    int r,c,l;
public:
    void displayPat()
    {
       cout<<"Enter limits";
       cin>>l;
       for(r=1;r<=l;r++)
       {
           for(c=1;c<=r;c++)
           {
            cout<<"*";
           }
           cout<<"\n";
       }

    }
};
int main()
{
    pattern P;
    P.displayPat();
    getch();
    return 0;
}
