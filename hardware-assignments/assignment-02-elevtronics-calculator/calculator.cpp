#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Declaring the variables
    string userName;
    double voltage;
    double resistance;

    // 2. Asking the user for their name
    cout << "--- Basic Electronics Calculator ---\n";
    cout << "Please enter your name: ";
    getline(cin, userName);

    // 3. More data collection enquiries
    cout << "Please enter the voltage (in Volts): ";
    cin >> voltage;

    cout << "Please enter the resistance (in Ohms): ";
    cin >> resistance;

    // 4. Calculate Current (I = V / R) and Power (P = V * I)
    double current = voltage / resistance;
    double power = voltage * current;

    // 5. Display the calculated results
    cout << "\n--- Calculation Results ---\n";
    cout << "Engineer: " << userName << "\n";
    cout << "Voltage:    " << voltage << " V\n";
    cout << "Resistance: " << resistance << " Ohms\n";
    cout << "Current:    " << current << " A\n";
    cout << "Power:      " << power << " W\n";
    cout << "---------------------------\n";

    return 0;
}