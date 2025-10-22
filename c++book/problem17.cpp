#include <iostream>
#include <iomanip>
using namespace std;
bool isPalindrome(int num) {
    if (num < 0) {
        return false;
    }
    int original = num;
    long long reverse = 0;
    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return original == reverse;
}
int main() {
    int count = 0;
    int num = 0;
    const int NUM_TO_FIND = 50;
    const int PER_LINE = 5;

   cout << " even palindrome numbers are:" <<endl;

    while (count < NUM_TO_FIND) {
        if (num % 2 == 0 && isPalindrome(num)) {
            count++;
            cout << setw(10) << num;
            
            if (count % PER_LINE == 0) {
                cout <<endl;
            }
        }
        num++;
    }
    return 0;
}