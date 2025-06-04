#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {} // Constructor initializes count to 0

    void display() const {
        cout << "Count: " << count << endl;
    }

    void increment() { count++; }

    // Friend functions to demonstrate incrementing by value, reference, and pointer
    friend void incrementByValue(Counter c);
    friend void incrementByReference(Counter &c);
    friend void incrementByPointer(Counter* c);
};

void incrementByValue(Counter c) {
    c.count++; // This only modifies a copy of the object
}

void incrementByReference(Counter &c) {
    c.count++; // This modifies the original object
}

void incrementByPointer(Counter* c) {
    c->count++; // This modifies the original object
}

int main() {
    Counter obj;
    
    cout << "Initial count value:" << endl;
    obj.display();
    
    cout << "Calling incrementByValue(obj)" << endl;
    incrementByValue(obj);
    obj.display(); // No change, because obj was passed by value

    cout << "Calling incrementByReference(obj)" << endl;
    incrementByReference(obj);
    obj.display(); // Count increases, because obj was passed by reference

    cout << "Calling incrementByPointer(&obj)" << endl;
    incrementByPointer(&obj);
    obj.display(); // Count increases, because obj was passed by pointer

    return 0;
}

