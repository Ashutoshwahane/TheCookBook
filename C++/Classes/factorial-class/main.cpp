#include <iostream>
#include <conio.h>

using namespace std;

class fact
{
private:
    int a, i , fact;
public:
    int getdata();
    int factorial();
};
int fact:: getdata()
{
    cout<<"Enter the value of a:";
    cin>>a;
    return 0;
}

int fact:: factorial()
{
    fact = 1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial is = "<<fact;
    return 0;
}
int main()
{
    fact obj;
    obj.getdata();
    obj.factorial();
    getch();
    return 0;
}
