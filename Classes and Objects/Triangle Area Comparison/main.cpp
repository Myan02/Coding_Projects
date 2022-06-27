#include <iostream>
#include "Triangle.cpp"
using namespace std;

int main() {
    Triangle triangle1;
    Triangle triangle2;

    double base1, height1, base2, height2;

    cin >> base1 >> height1 >> base2 >> height2;

    triangle1.SetBase(base1);
    triangle1.SetHeight(height1);
    triangle2.SetBase(base2);
    triangle2.SetHeight(height2);

    cout << "Triangle with smaller area:" << endl;
   
    if (triangle1.GetArea() < triangle2.GetArea())
    {
        triangle1.PrintInfo();
    }
    else
    {
        triangle2.PrintInfo();
    }

    return 0;
}