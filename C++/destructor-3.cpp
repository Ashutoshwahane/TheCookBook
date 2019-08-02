#include<iostream>
#include<conio.h>
using namespace std;

int count=0;
class alpha
{
public :
    alpha()
    {
        count++;
        cout << " Number of object created " << count << endl;
    }
    ~alpha()
    {
     cout << " Number of object destroyed " << count << endl;
     count--;
    }
};
int main()
{
    cout << " Enter main " << endl;
    alpha a1,a2,a3,a4;
    {
        cout << " Enter Block 1 " << endl;
        alpha a5;
    }
    {
        cout << " Enter Block 2 " << endl;
        alpha a6;
    }
    cout << " Reenter main " << endl;
    return 0;
}
