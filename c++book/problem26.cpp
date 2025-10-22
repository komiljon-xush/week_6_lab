#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;
int bin2Oct(int decimal) {
    if (decimal == 0) return 0;
    int octal = 0;
    int power = 1;
    while (decimal != 0) {
        int remainder = decimal % 8;
        octal += remainder * power;
        decimal /= 8;
        power *= 10;
    }
    return octal;
}

int main() {
    string binaryString;
    cout << "Enter a binary number as a string: ";
    cin >> binaryString;
    long long decimalValue = 0;
    long long powerOf2 = 1;
    for (int i = binaryString.length() - 1; i >= 0; i--) {
        if (binaryString[i] == '1') {
            decimalValue += powerOf2;
        } else if (binaryString[i] != '0') {
            cout << "Error: Invalid binary string entered." << endl;
            return 1;
        }
        powerOf2 *= 2;
    }
    int octalValue = bin2Oct((int)decimalValue);
    cout << "The corresponding octal value is: " << octalValue << endl;

    return 0;
}
