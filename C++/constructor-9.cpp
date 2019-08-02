#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int r,c,ln;
public :
    void display();
    sample();
};
sample::sample()
{
    cout << " Enter your line " << endl;
    cin>> ln;
}
void sample::display()
{
    for(r=1;r<=ln;r++)
    {
        for(c=1;c<=r;c++)
            cout << c;
            cout << endl;
    }
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
