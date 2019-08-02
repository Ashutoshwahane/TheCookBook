#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b;
public :
    sample(int,int);
    void display();
    void cal();
};
sample :: sample(int x,int y)
{
    a=x;
    b=y;
}
void sample :: display()
{
    if(a%2==0)
        cout << " Even number " << endl;
    else
        cout << " Odd number " << endl;
}
void sample :: cal()
{
    if(a>b)
        cout << " A is the greatest " << endl;
    else
        cout << " B is the greatest " << endl;
}

int main()
{
    int a,b;
    cout << " Enter your number " << endl;
    cin>> a >> b;
    sample s1(a,b);
    s1.display();
    s1.cal();
    getch();
    return 0;
}
