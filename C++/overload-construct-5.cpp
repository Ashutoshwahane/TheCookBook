#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int no,i;
public :
    sample(int x);
    void cal();
};
sample::sample(int x)
{
    no=x;

}

void sample::cal()
{
   for(i=1;i<=10;i++)
    cout << no << " * " << i << " = " << no*i <<endl;
}

int main()
{
    int no;
    cout << " Enter your number  " << endl;
    cin>> no ;
    sample s1(no);

    s1.cal();

    getch();
    return 0;
}



