#include <iostream>
using namespace std;
double producttwo(double num1, double num2) {
    return num1 * num2;
}
int main() {
    double numa, numb;
    cout << "Enter the first number: ";
    cin >> numa;
    cout << "Enter the second number: ";
  cin >> numb;
    double result = producttwo(numa, numb);
    cout << "The product of " << numa << " and " << numb << " is: " << result << endl;

    return 0;
}