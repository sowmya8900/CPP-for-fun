#include <iostream>
using namespace std;
class Rectangle
{
   protected:
          int width, height;
   public:
       void read_input(int w, int h)
        {
          width = w;
          height = h;
        }
       void display()
       {
          cout<<width<<" "<<height;
       }
};

class RectangleArea : public Rectangle
{
    public:
        void display()
        {
            cout<<"\n"<<width*height;
        }
};
int main()
{
 
    RectangleArea RA;
    RA.read_input(10,20);
    RA.Rectangle:: display();
    RA.display();
    return 0;
}
