#include <iostream>
#include <conio.h>

using namespace std;

class LeapYear
{
private:
    int yr;
public:
    void leap()
    {
        cout<<"Enter the year: ";
        cin>>yr;

        if(yr % 4 == 0 && yr % 100 == 0 )
            cout<<"It is a leap year";
        else
            cout<<"It is not a leap year";
    }
};
int main()
{
    LeapYear LP;
    LP.leap();
    getch();
    return 0;
}
