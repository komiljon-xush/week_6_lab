#include <iostream>
#include <random>
#include <iomanip>
using namespace std;
void printMatrix(int n) {
  random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution dis(0, 1000);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
           cout << setw(5) << dis(gen);
        }
       cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n > 0) {
        printMatrix(n);
    } else {
       cout << " enter a positive number for n." <<endl;
    }

    return 0;
}