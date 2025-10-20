#include <iostream>
using namespace std;
int sum(int a,int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int product(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return b != 0 ? a / b : 0;
}

int main() {
   int x, y;
    cin >> x >> y;
    cout << "Sum: " << sum(x, y) << endl;
    cout << "Subtract: " << subtract(x, y) << endl;
    cout << "Product: " << product(x, y) << endl;
    cout << "Division: " << division(x, y);
    return 0;
}
