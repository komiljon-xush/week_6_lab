#include <iostream>
#include <cmath>

using namespace std;

#define M_PI 3.14159265358979323846
void fun(double radius) {
    double circumference = 2 * M_PI * radius;
    double area = M_PI * pow(radius, 2);
    cout << "Radius entered: " << radius << endl;
    cout << "Circumference (2 * PI * r): " << circumference << endl;
    cout << "Area (PI * r^2): " << area << endl;
}
int main() {
    double r;
    cout << "Enter the radius of the circle: ";
   cin >> r;
    fun(r);
    return 0;
}