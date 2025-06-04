#include <iostream>
using namespace std;

class NumberSet {
private:
    float numbers[100]; 
    int count; 

public:
    NumberSet() { count = 0; } 

    void getInput() {
        cout << "Enter the number of values: ";
        cin >> count;
        cout << "Enter " << count << " float values: " << endl;
        for (int i = 0; i < count; i++) {
            cin >> numbers[i];
        }
    }

    float sumValues() {
        float sum = 0;
        for (int i = 0; i < count; i++) {
            sum += numbers[i];
        }
        return sum;
    }

    void displayAverage() {
        if (count == 0) {
            cout << "No values entered." << endl;
            return;
        }
        float average = sumValues() / count;
        cout << "Average of the entered numbers: " << average << endl;
    }

    void displayNumbers() {
        cout << "Numbers entered: ";
        for (int i = 0; i < count; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    NumberSet numSet;
    numSet.getInput();
    numSet.displayNumbers();
    numSet.displayAverage();
    return 0;
}

