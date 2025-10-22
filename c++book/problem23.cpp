#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int rollDice() {
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;
    cout << "You rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}
int main() {
    srand(time(0));
    
    int sum = rollDice();
    int point = 0;
    string result = "";
    switch (sum) {
        case 2:
        case 3:
        case 12:
            result = "You lose";
            break;
        case 7:
        case 11:
            result = "You win";
            break;
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
            point = sum;
            cout << "point is " << point << endl;
            int nextRoll;
            do {
                nextRoll = rollDice();
            } while (nextRoll != point && nextRoll != 7);
            if (nextRoll == point) {
                result = "You win";
            } else { 
                result = "You lose";
            }
            break;
    }
    cout << result << endl;

    return 0;
}
