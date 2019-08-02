#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int ar[10];
    int search,i;
public :
    void display();
    sample();
    ~sample();
};
sample::sample()
{
    cout << " Enter your numbers " << endl;
    for(i=0;i<10;i++)
        cin>> ar[i];
}
sample :: ~ sample()
{
    cout << " Destructor call " << endl;
}
void sample::display()
{
    for(i=0;i<10; )
    {
        if(search==ar[i])
        {
            cout << " Number is found " << endl;
            getch();
            return;
        }
        i++;
    }
    cout << " Number is not found " << endl;
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
