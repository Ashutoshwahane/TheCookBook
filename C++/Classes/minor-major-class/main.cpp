#include <iostream>
#include <conio.h>

using namespace std;

class Age
{
private:
    int age;
public:
    void val()
    {
        cout<<"Enter the age : ";
        cin>>age;

        if(age>=18)
            cout<<"You are Major";
        else
            cout<<"You are MInor";
    }
};
int main()
{
    Age A;
    A.val();
    getch();
    return 0;
}
