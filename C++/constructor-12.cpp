#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b,temp;
public :
    void display();
    sample();
};
sample::sample()
{
    cout << " Enter your number " << endl;
    cin>> a >> b;
}
void sample::display()
{
    cout << " Before Swapping " << endl;
    cout << " a = " << a << endl << " b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << " After Swapping " << endl;
    cout << " a = " << a << endl << " b = " << b << endl;

}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
