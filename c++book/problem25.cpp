#include <iostream>
#include <iomanip>

using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int count = 0;
    int number = 2;
    cout << "| " << setw(15) << left << "Additive Prime" << "| " << setw(15) << left << "Sum of digits" << "|" << endl;
    while (count < 25) {
        if (isPrime(number)) {
            int digitSum = sumDigits(number);
            if (isPrime(digitSum)) {
                cout << "| " << setw(15) << left << number << "| " << setw(15) << left << digitSum << "|" << endl;
                count++;
            }
        }
        number++;
    }

    return 0;
}