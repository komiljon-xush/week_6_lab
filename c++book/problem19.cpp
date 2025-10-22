#include <iostream>
#include <algorithm>

using namespace std;
void displaySortedNumber(double a, double b, double c) {
    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (a > b) {
        swap(a, b);
    }
    cout << " increasing order are: " << a << " " << b << " " << c << endl;
}
int main() {
    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    displaySortedNumber(num1, num2, num3);
    
    return 0;
}