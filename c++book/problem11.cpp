#include <iostream>
using namespace std;

void displayEven(int number) {
    string s = to_string(number);
    for (char c : s) {
        int d = c - '0';
        if (d % 2 == 0) cout << d << " ";
    }
}
int main() {
    int n;
    cin >> n;
    displayEven(n);
    return 0;
}
