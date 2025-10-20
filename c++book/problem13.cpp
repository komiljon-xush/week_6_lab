#include <iostream>
#include <iomanip>
using namespace std;
int DaysInFebruary(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 29;
    } else {
        return 28;
    }
}

int main() {
   cout << "Year | Days in February" << endl;
    for (int year = 1985; year <= 2025; ++year) {
        cout << year << " | " << std::setw(16) << left << DaysInFebruary(year) << endl;
    }
    return 0;
}
