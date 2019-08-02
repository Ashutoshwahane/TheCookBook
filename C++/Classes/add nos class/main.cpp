#include <iostream>
#include <conio.h>

using namespace std;

class addition
{
private:
    int n, sum, c, value;
public:
    void display()
    {
        cout<<"Enter the number of integers you want to add\n";
        cin>>n;

        cout<<"Enter"<<n<<"integers"<<"/n";

        for(c=1; c<=n; c++)
        {
            cin>>value;
            sum = sum + value;

        }
        cout<<"Sum of entered integers ="<<
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
