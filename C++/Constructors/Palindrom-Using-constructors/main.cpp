#include <iostream>
#include <conio.h>

using namespace std;

class palindrome
{
private:
    int n, rev, temp;
public:
    palindrome()
    {
    rev = 0;
    cout<<"Enter a number to check if it is a palindrome or not:\n";
    cin>>n;

    temp = n;

    while(temp != 0)
    {
        rev = rev * 10;
        rev = rev + temp % 10;
       temp = temp/10;
    }
   if(n == rev)
        cout<<"Number is a palindrome";
   else
        cout<<"Number is not a palindrome";
}

};

int main()
{
    palindrome P;
    getch();
    return 0;
}
