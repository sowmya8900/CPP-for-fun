#include <stdio.h>
#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public:
        complex()
            {
                
            }
        complex(int a)
            {
                x=y=a;
            }
        complex(int b, int c)
            {
                x=b;
                y=c;
            }
        friend void show(complex);
        friend complex sum(complex, complex);
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}
void show(complex c)
{
    cout<<"\n"<<c.x<<"+ i"<<c.y;
}
int main()
{
    complex A;
    complex B(5);
    complex C(4,5);
    A= sum(B, C);
    show(B);
    show(C);
    show(A);
}
