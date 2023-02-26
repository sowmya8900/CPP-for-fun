#include<iostream>
using namespace std;

int main(){

    // for loop

    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
    
    // while loop

    int x;
    cin >> x;
    while (x >= 0)
    {
        cin >> x;
    }
    cout << x;

    // do-while loop -> will run at least once before exiting
    
    int y;
    cin >> y;
    do
    {
        cin >> y;
    } while (y >= 0);
    cout << y;

    return 0;
}