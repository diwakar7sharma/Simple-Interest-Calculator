#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, simpleInterest;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter annual interest rate (in %): ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100.0;

    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}