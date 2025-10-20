#include <iostream>
using namespace std;
int Factorial(int n = 1) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}
int main() {
    int x;
    cin >> x;
    cout << Factorial(x) << endl;
    cout << Factorial() << endl;
    return 0;
}
