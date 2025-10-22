#include <iostream>
#include <cmath>
#include <limits>

using namespace std;
double area(int n, double side) {
    double pi = acos(-1.0);
    double numerator = n * pow(side, 2);
    double denominator = 4 * tan(pi / n);
    return numerator / denominator;
}

int main() {
    int n;
    double side;
    cout << "Enter the number of sides (n): ";
    if (!(cin >> n) || n < 3) {
        cout << "Invalid input for number of sides. Must be an integer greater than 2." << endl;
        return 1;
    }
    cout << "Enter the side length (s): ";
    if (!(cin >> side) || side <= 0) {
        cout << "Invalid input for side length. Must be a positive number." << endl;
        return 1;
    }
    double result = area(n, side);
    cout.precision(numeric_limits<double>::max_digits10);
    cout << "The area of the regular polygon is: " << result << endl;

    return 0;
}