#include<iostream>
using namespace std;

int main(){
    /*
    12345
    1234
    123
    12
    1
    */
    
    cout << "Inverted Numbers\n";
    int n1;
    cin >> n1;

    for (int i = n1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << "#################\n";
   
    /*
    1
    01
    101
    0101
    10101
    */
    
    cout << "0-1 Pattern\n";
    int n2;
    cin >> n2;

    for (int i = 1; i <= n2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j) % 2 == 0)
            {
                cout << '1';
            }
            else
            {
                cout << '0';
            }
            
        }
        cout << endl;
    }
    cout << "#################\n";
   

    /*
        *****
       *****
      *****
     *****
    *****
    */
        
    cout << "Rhombus Pattern\n";
    int n3;
    cin >> n3;
    for (int i = 1; i <= n3; i++)
    {
        for (int j = 1; j <= n3-i; j++)
        {
            cout << ' ';
        }
        for (int k = 1; k <= n3; k++)
        {
            cout << '*';
        }
        
        cout << endl;
    }
    cout << "#################\n"; 
   
    /*
            1   
          1   2   
        1   2   3   
      1   2   3   4   
    1   2   3   4   5 
    */
    
    cout << "Number Pattern\n";
    int n4;
    cin >> n4;
    for (int i = 1; i <= n4; i++)
    {
        for (int j = 1; j <= n4-i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << "   ";
        }
        cout << endl;
    }
    cout << "#################\n";
   

    /* 
        1
       212
      32123
     4321234
    543212345
    */
    
    cout << "Palindromic Pattern\n";
    int n5;
    cin >> n5;
    for (int i = 1; i <= n5; i++)
    {
        for (int j = 1; j <= n5-i; j++)
        {
            cout << ' ';
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        for (int l = 2; l <= i; l++)
        {
            cout << l;
        }
        
        cout << endl;
    }
    cout << "#################\n";
   
    /*
       *
      ***
     *****
    *******
    *******
     *****
      ***
       *
    */
    
    cout << "Star Pattern\n";
    int n6;
    cin >> n6;
    for (int i = 1; i <= n6; i++)
    {
        for (int j = 1; j <= n6-i; j++)
        {
            cout << ' ';
        }
        for (int k = 1; k <= i; k++)
        {
            cout << '*';
        }
        for (int j = 2; j <= i; j++)
        {
            cout << '*';
        }  
        cout << endl;
    }
    for (int i = n6; i >= 1; i--)
    {
        for (int j = 1; j <= n6-i; j++)
        {
            cout << ' ';
        }
        for (int k = 1; k <= i; k++)
        {
            cout << '*';
        }
        for (int j = 2; j <= i; j++)
        {
            cout << '*';
        }  
        cout << endl;
    }
    cout << "#################\n";
   
    /* 
      *   *   
     * * * * 
    *   *   *
    */
    cout << "Zig-Zag Pattern\n"; 
    int n7;
    cin >> n7;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n7; j++)
        {
            if (((i+j) % 4 == 0) || ((i == 2) && (j%4 == 0)))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;  
    }
    cout << "#################\n";
    return 0;
}