#include<iostream>
using namespace std;

int main(){
    cout << "Hello World!" << endl;
    
    int a;
    float b;
    char c;

    cout << "Sizes of a, b, and c are:" << endl << sizeof(a) << endl << sizeof(b) << endl << sizeof(c);
    cout << typeid(c).name() << endl;

    int amount;
    cout << "Enter the amount:\n";
    cin >> amount;
    cout << amount;
    return 0;
}