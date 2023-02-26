#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    // Prime number using flag
    cout << "Prime Number check:\n";
    int num, flag = 0;
    cin >> num;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime\n";
    }
    else
    {
        cout << "Not Prime\n";
    }
    // num = 1234
    cout << "Reverse of a Number\n";
    int nReverse = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        nReverse = (nReverse * 10) + lastDigit;
        num = num / 10;     
    }
    cout << "Reverse:\t" << nReverse << endl;
    
    
    cout << "Armstrong Number\n";
    int num1;
    int sum = 0;
    cin >> num1;
    int x = num1;
    while (num1 > 0)
    {
        int lastDigit = num1 % 10;
        sum += pow(lastDigit, 3);
        num1 = num1 / 10;    
    }
    
    if (x == sum)
    {
        cout << "It's an Armstrong Number\n";
    }
    else
    {
        cout << "It's not an Armstrong Number\n";
    }
    



    return 0;
}