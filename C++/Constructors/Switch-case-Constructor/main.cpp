#include <iostream>
#include<conio.h>

using namespace std;

class Calculate
{
    char ch;
    float num1, num2;
public:
     Calculate();
};

Calculate :: Calculate()
{
 cout << "Enter an operator (+, -, *, /): ";
    cin >> ch;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (ch)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1/num2;
            break;
        default:
            // operator  does not match any case constant (+, -, *, /)
            cout << "Error! operator is not correct";
            break;
}
}
int main()
{

    Calculate C;
    getch();
    return 0;
}
