#include <stdio.h>
#include<iostream>
using namespace std;
class sample
{
    int x,y,z;
    public:
        void input(int a, int b, int c);
        void display();
        void operator - ();
};

void sample:: input(int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}
void sample:: display()
{
    cout<<"\nx= "<<x;
    cout<<"\ny="<<y;
    cout<<"\nz="<<z;
}
void sample:: operator -()
{
    x= -x;
    y= -y;
    z= -z;
}
int main()
{
    sample s;
    s.input(4,8,12);
    s.display();
    -s;
    s.display();
}
