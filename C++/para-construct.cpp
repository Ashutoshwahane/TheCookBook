#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int m,n;
public :
    sample(int,int);
    void display();
};
sample :: sample(int x,int y)
{
    m=x;
    n=y;
}
void sample :: display()
{
    cout << " m = " << m;
    cout << " n = " << n;
}
int main()
{
    int m,n;
    cout << " Enter your number " << endl;
    cin>> m >> n;
    sample s1(m,n);
    s1.display();
    getch();
    return 0;
}
