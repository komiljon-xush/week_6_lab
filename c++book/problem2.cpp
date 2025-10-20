#include <iostream>
#include <cmath>
using namespace std;

double calcacc(double v1, double v2, double t) {

    if (t == 0) {
        cout << " Time (t) cannot be zero for acceleration calculation." << endl;
        return 0.0;
    }
    double absolute_difference = std::abs(v2 - v1);
    double acceleration = absolute_difference / t;
    return acceleration;
}
int main() {
    double velo1, velo2, timet;
    cout << " velocity (v1): ";
    cin >> velo1;
   cout << " velocity (v2): ";
   cin >> velo2;
   cout << " time (t): ";
    cin >> timet;


    double acceleration = calcacc(velo1, velo2, timet);

    if (timet != 0) {
       cout << "The  acceleration is: " << acceleration << endl;
    }

   return 0;
}