#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int r,c,ln;
    char ch=65;
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
        ch=65;
        for(c=1;c<=r;c++)
            cout << ch++;
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
