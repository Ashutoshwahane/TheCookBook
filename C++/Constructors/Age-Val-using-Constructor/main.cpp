#include <iostream>
#include <conio.h>

using namespace std;

class validation
{
private:
    int age;
public:
   validation()
    {
        cout<<"Enter your age : ";
        cin>>age;

        if(age >= 18)
            cout<<" You are eligible for license";
        else
            cout<<"You are not eligible for license";
    }
};

int main()
{
    validation V;
    getch();
    return 0;
}
