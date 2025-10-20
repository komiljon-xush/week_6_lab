#include <iostream>
using namespace std;

int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}

int main() {
    for (int i = 1; i <= 75; i++) {
        cout << getTriangularNumber(i) << "\t";
        if (i % 5 == 0) cout << endl;
    }
    return 0;
}
