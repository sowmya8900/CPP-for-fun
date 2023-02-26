#include<iostream>
using namespace std;

int main(){
    // a person goes out only on odd numbered days (1,3,5,...) in a month and spends 300 each time 
    int money = 3000;
    for (int i = 1; i <= 30; i++)
    {
        if (i%2 == 0)
        {
            continue;
        }
        if (money == 0)
        {
            break;
        }
        
        cout << money << "!OUT!" << endl;
        money -= 300;
    }

    // print numbers from 1 to 100 which are not divisible by 3
    for (int j = 1; j <= 100; j++)
    {
        if (j%3 == 0)
        {
            continue;
        }
        cout << j << endl;
        
    }

    // prime number
    int number;
    cin >> number;
    int z;
    for (z = 2; z <= number-1; z++)
    {
        if (number%z == 0)
        {
            cout << "Non prime" << endl;
            break;
        }
    }
    if (z == number)
    {
        cout << "Prime" << endl;
    }

    // Prime numbers between a and b

    int a, b;
    cin >> a >> b;
    int x, n;

    for(n = a; n <= b; n++)
    {
        for (x = 2; x <= n-1; x++)
        {
            if (n%x == 0)
            {
                break;
            }
        }
        if (x == n)
        {
            cout << n << endl;
        }
    }

    return 0;
}