#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int no,no1,no2,no3,sum,i;
public :
    sample(int x);
    void display();
    void cal();
};
sample::sample(int x)
{
    no=x;
    sum=0;
}

void sample::cal()
{
    no1=no/100;
    no2=(no%100)/10;
    no3=no%10;
    sum=(no1*no1*no1)+(no2*no2*no2)+(no3*no3*no3);
    if(no==sum)
        cout << " Armstrong number " << endl;
    else
        cout << " Not a Armstrong number " << endl;
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

