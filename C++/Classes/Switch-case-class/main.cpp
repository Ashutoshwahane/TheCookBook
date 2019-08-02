#include <iostream>
#include <conio.h>

using namespace std;

class oper
{
private:
    char o;
    float num1, num2;
public:
    void calculate();
};
void oper :: calculate()
{
 cout << "Enter an operator (+, -, *, /): ";
    cin >> o;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (o)
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
            cout << "Error! operator is not correct";
            break;
      }

}
int main()
{
    oper obj;
    obj.calculate();
    getch();
    return 0;
}
