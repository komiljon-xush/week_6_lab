#include <iostream>
#include <cmath>

using namespace std;

double seriesA(int n);
double seriesB(int n);
double seriesC(int n);
double seriesD(int n);
double pi=3.1415;
double e=2.7182;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n < 1) {
        cout << "n must be 1 or greater." << endl;
        return 1;
    }
    cout << "seriesA(" << n << ") = " << seriesA(n) << endl;
    cout << "seriesB(" << n << ") = " << seriesB(n) << " (Formula not provided)" << endl;
    cout << "seriesC(" << n << ") = " << seriesC(n) << endl;
    cout << "seriesD(" << n << ") = " << seriesD(n) << " (Formula not provided)" << endl;

    return 0;
}
double seriesA(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(pi, 2 - i);
    }
    return sum;
}
double seriesB(int n) {
    return 0;
}

double seriesC(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (pow(-1, i) * pow(2, i)) / (2 * pi + i);
    }
    return sum;
}

double seriesD(int n) {
    return 0;
}
