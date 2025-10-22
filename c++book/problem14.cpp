#include <iostream>
#include <cmath>
using namespace std;

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
    return investmentAmount * pow(1 + monthlyInterestRate, years * 12);
}

int main() {
    double investmentAmount, annualInterestRate;
    cout << "Enter investment amount: ";
    cin >> investmentAmount;
    cout << "Enter annual interest rate (e.g., 9 for 9%): ";
    cin >> annualInterestRate;

    double monthlyInterestRate = annualInterestRate / 100 / 12;

    cout << "Years\tFuture Value" << endl;
    for (int years = 1; years <= 30; years++) {
        cout << years << "\t" << futureInvestmentValue(investmentAmount, monthlyInterestRate, years) << endl;
    }
    return 0;
}
