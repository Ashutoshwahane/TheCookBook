#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int ar[5],no,rem,i;
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
    for(i=0;no!=0;i++)
    {
        ar[i]=no%2;
        no = no/2;
    }
    for(i--;i>=0;i--)
        cout << ar[i] ;
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
