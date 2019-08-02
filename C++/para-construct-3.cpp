#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int n,f,i;
public :
    sample(int);
    void display();
};
sample :: sample(int x)
{
    n=x;
    f=1;
}
void sample :: display()
{
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    cout << " Factorial =  " << f << endl;
}
int main()
{
    int a;
    cout << " Enter your number " << endl;
    cin>> a;
    sample s1(a);
    s1.display();
    getch();
    return 0;
}
