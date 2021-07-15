#include<iostream>
using namespace std;
/* Hello World
int main(){
    cout<<"Hello World!";
    return 0;
}
*/
/* Sum
int main(){
    int a, b;
    cout<< "a: ";
    cin>> a;
    cout<<"b: ";
    cin>>b;

    int s = a+b;
    cout<< "sum = " << s;
    return 0;
}
*/
/* If- Else
int main(){
    int amount;
    cin>> amount;

    if(amount>7000){
        cout<<"Sowmya";
    }
    else if (amount>2000){
        cout<<"Eva";
    }
    else{
        cout<<"Kashish";
    }
}
*/
/* nested if-else
int main(){
    int amount;
    cin>> amount;

    if(amount>7000){
        if (amount >10000)
        {
            cout<<"more than 10k";
        }
        else
        cout<<"less than 10k";
        
        cout<<"Sowmya";
    }
    else if (amount>2000){
        cout<<"Eva";
    }
    else{
        cout<<"Kashish";
    }
}
*/
/* loops

int main(){
    int n;
    cin >> n;
    // for loop
    for (int i = 0; i < n; i++)
    {
        cout<< i+1 <<endl;
    }

    // while loop
    int s = 0;
    while(n>0){
        s += n;
        n--;
    }
    cout<<s;

    // do-while loop
    do
    {
        n = n/2;
        cout<<n << endl;
    } while (n>0);
*/
/* break- continue - prime number checking
int main(){
    int n;
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            cout<<"Non prime";
            break;
        }        
    }
    if (i == n)
    {
        cout << "Prime" <<endl;
    }
    
    
    return 0;
}
*/
/* Prime numbers bw 2 numbers
int main(){
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                break;
            }
            
        }
        if (i == j)
        {
            cout << j << endl;
        }
        
        
    }
    
    return 0;
}
*/
/* Switch- Calculator
int main(){
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    char op;
    cout << "Enter the op: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a+b;
        break;
    case '-':
        cout << a-b;
        break;
    case '*':
        cout << a*b;
        break;
    case '/':
        cout << a/b;
        break;
    
    default:
        cout << "Wrong Op";
        break;
    }
    return 0;
}
*/

