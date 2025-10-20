#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
int main() {
    int x, y;
    cin >> x >> y;
    swapNumbers(x, y);
    cout << x << " " << y;
    return 0;
}
