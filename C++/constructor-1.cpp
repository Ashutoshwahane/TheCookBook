#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a;
public :
    void display();
    sample();
};
sample::sample()
{
    cout << " Enter your numbers " << endl;
    cin>> a ;
}
void sample::display()
{
    if(a%2==1) // if(a%2==0)
        cout << " Odd number " << endl;
    else
        cout << " Even number " << endl;
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
