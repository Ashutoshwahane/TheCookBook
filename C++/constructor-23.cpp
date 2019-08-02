#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int no,i;
public :
    void display();
    sample();
};
sample::sample()
{
    cout << " Enter your numbers " << endl;
    cin>> no;
}
void sample::display()
{
    for(i=1;i<=10;i++)
        cout << no << " * " << i << " = " << no * i  << endl;
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
