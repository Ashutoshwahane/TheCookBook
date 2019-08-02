#include <iostream>
#include <conio.h>

using namespace std;

class Fibonacci
{
    int no,i,f1,f2,f3;
public:
    Fibonacci()
    {
    f1=0;
    f2=1;
    cout<<"Enter number of terms for series:";
    cin>>no;
    cout<<"Fibonacci series is :";

    for(i=0;i<no;i++)
    {
        cout<<"\n"<<f1;
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
}

};
int main()
{
    Fibonacci FS;
    getch();
    return 0;
}
