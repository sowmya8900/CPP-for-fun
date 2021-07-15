#include<iostream>
using namespace std;

/* Pattern 1 - Square
    ****
    ****
    ****
    ****

int main(){
    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << '*';
        }
        cout << endl;
        
    }
    
    return 0;
}
*/
/* Pattern 2 - Hollow Square
    *****
    *   *
    *   *
    *   *
    *****
int main(){
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        {
            if (i == 0 || j == 0 || i == r-1 || j == c-1)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
            
        } cout << endl;
        
    }
    
    return 0;
}
*/
/* Pattern 3 - Inverted Half Pyramid
    *****
    ****
    ***
    **
    *
int main(){
    int n;
    cin >> n;

    while (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }
        n--;
        cout << endl;
        
    }
    
    
    return 0;
}
*/
/* Pattern 4 - Inverted Half Pyramid with 180 rotation
        *
       **
      ***
     ****
    *****
int main(){
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << ' ';
            }
            else {
                cout << "*";
            }
            
        }
        cout << endl;
        
    }
    
    return 0;
}
*/
/* Pattern 5 - Half Pyramid using numbers
    1
    22
    333
    4444
    55555

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
        
    }
    
    return 0;
}
*/
/* Pattern 6 - Floyd's Triangle
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15 

int main(){
    int n;
    cin >> n;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;

        }
        cout << endl;
        
    }
    
    return 0;
}
*/
/* Pattern 7 - Inverted Pattern
    12345
    1234
    123
    12
    1

int main(){
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
    return 0;
}
*/
/* Pattern 8 - 0-1 Pattern
    1
    01
    101
    0101
    10101

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << '1';
            }
            else{
                cout << '0';
            }
            
        }
        cout << endl;
        
    }
    
    return 0;
}
*/