#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b;
public :
    void display();
    sample();
};
sample::sample()
{
    cout << " Enter your numbers " << endl;
    cin>> a >> b;
}
void sample::display()
{
    cout << " Addition = " << a+b << endl;
    cout << " Subtraction = " << a-b << endl;
    cout << " Multiplication = " << a*b << endl;
    cout << " Division = " << a/b << endl;
    cout << " Modulus = " << a%b << endl;
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
