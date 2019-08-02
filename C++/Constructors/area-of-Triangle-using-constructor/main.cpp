#include <iostream>
#include <conio.h>

using namespace std;

class triangle
{
    int height, base;
    float ans;
public:
    triangle()
    {
        cout<<"Enter Height and Base of Triangle:\n";
        cin>>height>>base;

        ans = 0.50 * height * base;

        cout<<"Area of a triangle is = "<<ans;
    }
};
int main()
{
    triangle T;
    getch();
    return 0;
}
