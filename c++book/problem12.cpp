#include <iostream>
using namespace std;
int Digits(int number) {
    int sum = 0;
    while (number != 0) {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }
    return sum;
}
void Armstrong(int sum, int number) {
    if (sum == number) cout << "Armstrong number";
    else cout << "Not an Armstrong number";
}
int main() {
    int n;
    cin >> n;
    int sum = Digits(n);
    Armstrong(sum, n);
    return 0;
}
