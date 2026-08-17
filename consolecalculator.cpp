#include <iostream>

using namespace std;

int main (){

    char o;
    double a,b,c;

    cout << "**********CALCULATOR**********" << endl;

    cout << "Enter any operator(+,-,*,/):";
    cin >> o;

    cout << "Enter first number:";
    cin >> a;

    cout << "Enter second number:";
    cin >> b;

    switch (o)
    {
    case '+':
        c = a + b;
        cout << "result:" << c <<"\n";
        break;
    case '-':
        c = a - b;
        cout << "result:" << c <<"\n";
        break;
    case '*':
        c = a * b;
        cout << "result:" << c <<"\n";
        break;
    case '/':
        c = a / b;
        cout << "result:" << c <<"\n";
        break;
    
    default:
         cout << "Invalid!!!";
        break;
    }

     cout << "******************************";

    return 0;
}