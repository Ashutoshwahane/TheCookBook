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
    cout << " Number is that " << a << b;
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
