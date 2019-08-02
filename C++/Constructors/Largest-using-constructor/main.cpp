#include <iostream>
#include <conio.h>

using namespace std;

class large
{
private:
    int a, b;
public:
   large ()
    {
        cout<<"Enter the first number:";
        cin>>a;
        cout<<"Enter the second number:";
        cin>>b;

        if(a>b)
            cout<<a<<" is largest"<<endl;
        else
            cout<<b<<" is largest"<<endl;
    }
};
int main()
{
    large L;
    getch();
    return 0;
}

