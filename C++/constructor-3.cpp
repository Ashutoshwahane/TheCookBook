#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b,c;
public :
    void display();
    sample();
};
sample::sample()
{
    cout << " Enter your numbers " << endl;
    cin>> a >> b >> c;
}
void sample::display()
{
    if(a>b)
    {
            if(a>c)
                 cout << " A is greater " << endl;
            else
                cout << " B is greater " << endl;
    }
    else
    {
            if(c>b)
                cout << " C is greater " << endl;
            else
                cout << " B is greater " << endl;
    }
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
