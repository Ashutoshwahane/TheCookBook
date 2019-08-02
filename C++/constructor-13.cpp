#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int no,i,flag=0;
public :
    void display();
    sample();
};
sample::sample()
{
    cout << " Enter your number " << endl;
    cin>> no;
}
void sample::display()
{
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout << " Not a prime number " << endl;
    else
        cout << " prime number " << endl;
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
