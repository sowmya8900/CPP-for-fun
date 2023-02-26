#include<iostream>
using namespace std;

int main()
{
    // Basic Switch

    char alphabet;
    cin >> alphabet;

    switch (alphabet)
    {
    case 'a':
        cout << "Hello";
        break;
    case 'b':
        cout << "Namaste";
        break;
    case 'c':
        cout << "Salut";
        break;
    case 'd':
        cout << "Hola";
        break;
    case 'e':
        cout << "Ciao";
        break;
    
    default:
        cout << "Incorrect value, use a-e, case-sensitive";
        break;
    }

    // Basic Calculator

    int n1, n2;
    cin >> n1 >> n2;

    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    case '%':
        cout << n1 % n2;
        break;
    
    default:
        cout << "Incorrect op, use +, -, *, /, %, case-sensitive";
        break;
    }


    return 0;
}