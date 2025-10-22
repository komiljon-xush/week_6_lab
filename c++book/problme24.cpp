#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int reverse(int n) {
    int reversedNum = 0;
    while (n > 0) {
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n /= 10;
    }
    return reversedNum;
}
bool isPalindrome(int n) {
    return n == reverse(n);
}
int main() {
    int count = 0;
    int number = 2;
    
    while (count < 100) {
        if (isPrime(number)) {
            if (!isPalindrome(number)) {
                int reversedNumber = reverse(number);
                 if (isPrime(reversedNumber)) {
                    cout << setw(6) << number;
                    count++;
                    if (count % 10 == 0) {
                        cout << endl;
                    }
                }
            }
        }
        number++;
    }
    return 0;
}