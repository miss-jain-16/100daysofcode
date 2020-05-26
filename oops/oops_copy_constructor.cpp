#include <iostream>
using namespace std;

class CopyCon {
 int a, b;

public:
 CopyCon(int x, int y)
 {
 a = x;
 b = y;
 cout << "\nHere is the initialization of Constructor";
 }
 void Display()
 {
 cout << "\nValues : \t" << a << "\t" << b;
 }
};

int main()
{
 CopyCon Object(30, 40);
 //Copy Constructor
 CopyCon Object2 = Object;
 Object.Display();
 Object2.Display();
}
