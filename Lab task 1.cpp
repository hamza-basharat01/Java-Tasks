#include <iostream>
#include <cmath>
using namespace std;

void Menu() {
    int choice, a, b;
    cout << "Select an operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n5. Power\n";
    cin >> choice;

    if (choice == 5) {
        cout << "Enter number and power: ";
        cin >> a >> b;
        cout << "Result: " << pow(a, b) << endl;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice) {
            case 1:
                cout << "Result: " << a + b << endl;
                break;
            case 2:
                cout << "Result: " << a - b << endl;
                break;
            case 3:
                if (b != 0) 
                    cout << "Result: " << a / b << endl;
                else
                    cout << "Error! Division by zero." << endl;
                break;
            case 4:
                cout << "Result: " << a * b << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
}

int main() {
    Menu();
    return 0;
}

