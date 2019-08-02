#include <iostream>
#include <conio.h>

using namespace std;

class Age
{
private:
    int age;
public:
    Age()
    {
        cout<<"Enter the age : ";
        cin>>age;

        if(age>=18)
            cout<<"You are Major";
        else
            cout<<"You are Minor";
    }
};
int main()
{
    Age A;
    getch();
    return 0;
}
