#include <iostream>
#include <string>
#include <sstream>

string convertMillis(long millis) {
    long totalSeconds = millis / 1000;
    long hours = totalSeconds / 3600;
    long secondsRemaining = totalSeconds % 3600;
    long minutes = secondsRemaining / 60;
    long seconds = secondsRemaining % 60;

    stringstream ss;
    ss << hours << ":" << minutes << ":" << seconds;

    return ss.str();
}
int main() {
    long userInput;

    cout << "Enter g integer for milliseconds: ";
    if (cin >> userInput) {
        string result = convertMillis(userInput);
       cout << "Conversion: " << result << endl;
    } else {
       cout << "Invalid input." <<endl;
    }

    return 0;
}