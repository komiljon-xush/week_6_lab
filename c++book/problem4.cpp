#include <iostream>
using namespace std;
void findDimensions(int a) {
    int perimeter = 4 * a;
    int area = a * a;
    cout << "Square with side " << a << ":" <<endl;
    cout << "Perimeter: " << perimeter <<endl;
    cout << "Area: " << area <<endl;
}
void findDimensions(int a, int b) {
    int perimeter = 2 * (a + b);
    int area = a * b;
   cout << "Rectangle with sides " << a << " and " << b << ":" <<endl;
    cout << "Perimeter: " << perimeter <<endl;
    cout << "Area: " << area <<endl;
}
int main() {
    findDimensions(10);
    cout << std::endl;
    findDimensions(7, 12);
    return 0;
}
