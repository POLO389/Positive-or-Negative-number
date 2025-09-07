#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    // Positive number checker:
    if (number > 0) {
        system("Color 0A");
        cout << "Yea! " << number << " is a positive number !" << endl;
     }
    else if (number < 0) {
        system("Color 0C");
        cout << "You entered a negative number: " << number << endl;
     } 
    else {
        cout << "You entered 0." << endl;
     }

    int d;

    while ((d = getchar()) != '\n' && d != EOF) { }
    printf("Press ENTER to Continue\n");
    getchar();

    return 0;
}