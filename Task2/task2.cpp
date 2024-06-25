// SIMPLE CALCULATOR WHICH PERFORMS '+','-','*'&'/'
// #CodSoft
#include <iostream>
using namespace std;
int main()
{
    cout<<"\n\nTHIS IS A SIMPLE CALCULATOR WHICH PERFORMS '+', '-', '*', & '/'"<<endl<<endl;
    double a, b;// to store two numbers.
    char op;// to store operators.
    do
    {
        cout << "Enter the first number.: ";
        cin >> a;// taking first no. input.
        cout << "Enter then second number.: ";
        cin >> b;// taking second no. input.
        cout << "Choose the operation to be performed on the given no.'s." << endl;
        cout << "Enter '+' for addition i.e, (a+b)" << endl;
        cout << "Enter '-' for addition i.e, (a-b)" << endl;
        cout << "Enter '*' for addition i.e, (a*b)" << endl;
        cout << "Enter '/' for addition i.e, (a/b)" << endl;
        cin >> op;
        switch (op)//selecting case and performing calculations accordingly and displaying result.
        {
        case '+':
        {
            cout << a << " + " << b << " = " << (a + b) << endl;
            break;
        }
        case '-':
        {
            cout << a << " - " << b << " = " << (a - b) << endl;
            break;
        }
        case '*':
        {
            cout << a << " * " << b << " = " << (a * b) << endl;
            break;
        }
        case '/':
        {
            if (b == 0)
                cout << "Division with 0 is NOT allowed." << endl;
            else
                cout << a << " / " << b << " = " << (a / b) << endl;
            break;
        }
        default:
        {
            cout << "Invalid Operator Selected.\nPlease Select a valid Operator." << endl;
        }
        }
        cout << "Enter 'e' or 'E' to exit. Enter any other character to continue." << endl;
        cin >> op;
        if (op == 'e' || op == 'E')
            break;
    } while (true);
    cout << "Thank You for using this calculator." << endl;
    return 0;
}