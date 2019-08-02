#include <iostream>
#include <conio.h>

using namespace std;

class Default
{

public:
    float value(float p, int n, float r = 0.15)
    {
        int year = 1;
        float sum = p;
        while(year<=n)
        {
            sum = sum *(1+r);
            year = year +1;
            return sum;
        }
    }
    void print(char ch = '*',int len=40)
    {
        for(int i = 1; i<=len;i++)
        {
            cout<<ch;
        }
    }
};

int main()
{

    Default D;
    D.print();

    cout<<"\nThe final value is = "<<D.value(6000.00,5)<<endl;
    D.print('=');
    getch();
    return 0;
}
