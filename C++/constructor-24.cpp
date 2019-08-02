#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int no,i,sum;
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
    sum=0;
    for(i=1;i<=no;i++)
    {
        sum=sum+i;
        cout << " sum = " << sum << endl;
    }
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
