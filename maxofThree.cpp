#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter three numbers:\n";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is the max";
        }
        else
        {
            cout << c << " is the max";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is the max";
        }
        else
        {
            cout << c << " is the max";
        }
        
        
    }
    
    return 0;
}