#include<iostream>
using namespace std;

int main(){
    /* 
    ****
    ****
    ****
    ****
    **** 
    */

    cout << "Rectangle Stars\n";
    int r1, c1;
    cin >> r1 >> c1;


    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << "#########################\n";
    /* 
    ****
    *  *
    *  *
    *  *
    ****
     */
     
    cout << "Hollow Stars\n";
    int r2, c2;
    cin >> r2 >> c2;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            if ((i == 0) || (j == 0) || (i == r2-1) || (j == c2-1))
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout<<endl;
    } 
    cout << "#########################\n";
    /* 
        *****
        ****
        ***
        **
        *
    */
    
    cout << "Inverted Triangle\n";
    int n1;
    cin >> n1;
    while (n1!=0)
    {
        for (int i = 0; i < n1; i++)
        {
            cout << '*';   
        }
        n1--;
        cout << endl;
    }
    cout << "#########################\n";
    /* 
        *
       **
      ***
     ****
    *****
    */

    
    cout << "Triangle with 180 degree rotation\n";
    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (j < n2-i-1)
            {   
                // cout << i << j << endl;
                cout << ' ';
            }
            else
            {
                // cout << i << j << endl;
                cout << '*';
            }
        }
        cout << endl;
                
    }
    cout << "#########################\n";
    /*    
    1
    22
    333
    4444
    55555
    */
    
    cout << "Number Pattern\n";
    int n3;
    cin >> n3;
    for (int i = 1; i <= n3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
        
    }
    cout << "#########################\n";

    /* 
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15 
    */
    
    cout << "Floyd's Triangle\n";
    int n4;
    cin >> n4;
    int x = 0;
    for (int i = 1; i <= n4; i++)
    {
        for (int j = 1; j <= i; j++)
        {   
            x += 1;
            cout << x << ' ';
        }
        cout << endl;
        
    }
    cout << "#########################\n";

    /*
    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *
    */

    
    cout << "Butterfly\n";
    int n5;
    cin >> n5;
    for (int i = 1; i <= n5; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << '*';
        }
        for (int k = 1; k <= 2*n5-2*i; k++)
        {
            cout << ' ';
        }
        for (int k = 1; k <= i; k++)
        {
            cout << '*';
        }
        cout << endl;
    }
    
    for (int i = n5; i >= 1; i--)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << '*';
        }
        for (int k = 1; k <= 2*n5-2*i; k++)
        {
            cout << ' ';
        }
        for (int k = 1; k <= i; k++)
        {
            cout << '*';
        }
        cout << endl;
    }    
    cout << "#########################\n";

    return 0;
}