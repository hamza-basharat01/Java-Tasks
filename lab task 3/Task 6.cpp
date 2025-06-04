#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    // Constructor
    Temperature(double c) {
        celsius = c;
    }

    // Getter for Celsius
    double getCelsius() {
        return celsius;
    }

    // Setter for Celsius
    void setCelsius(double c) {
        celsius = c;
    }

    // Getter for Fahrenheit
    double getFahrenheit() {
        return (celsius * 9/5) + 32;
    }

    // Setter for Fahrenheit
    void setFahrenheit(double f) {
        celsius = (f - 32) * 5/9;
    }
};

int main() {
    Temperature temp(0); // Initialize with 0 Celsius

    cout << "Initial Celsius: " << temp.getCelsius() << " C" << endl;
    cout << "Initial Fahrenheit: " << temp.getFahrenheit() << " F" << endl;

    temp.setCelsius(100);
    cout << "Updated Celsius: " << temp.getCelsius() << " C" << endl;
    cout << "Updated Fahrenheit: " << temp.getFahrenheit() << " F" << endl;

    temp.setFahrenheit(32);
    cout << "Updated Fahrenheit to Celsius: " << temp.getCelsius() << " C" << endl;

    return 0;
}

