#include <iostream>
using namespace std;

// Base class: Computer
class Computer {
protected:
    int word_size, memory_size, storage_size, speed;

public:
    // Constructor
    Computer(int w, int m, int s, int sp) {
        word_size = w;
        memory_size = m;
        storage_size = s;
        speed = sp;
    }

    // Function to display specifications
    void display() {
        cout << "Computer Specifications:\n";
        cout << "Word Size: " << word_size << " bits\n";
        cout << "Memory Size: " << memory_size << " MB\n";
        cout << "Storage Size: " << storage_size << " MB\n";
        cout << "Speed: " << speed << " MHz\n";
    }

    // Overloaded setSpecs methods
    void setSpecs(int m, int sp) {
        memory_size = m;
        speed = sp;
    }
    void setSpecs(int m, int sp, int s) {
        memory_size = m;
        speed = sp;
        storage_size = s;
    }
};

// Derived class: Laptop
class Laptop : public Computer {
private:
    int length, width, height, weight;

public:
    // Constructor
    Laptop(int w, int m, int s, int sp, int l, int wd, int h, int wt) : Computer(w, m, s, sp) {
        length = l;
        width = wd;
        height = h;
        weight = wt;
    }

    // Overridden display function
    void display() {
        Computer::display(); // Call base class display
        cout << "Laptop Additional Specifications:\n";
        cout << "Length: " << length << " cm\n";
        cout << "Width: " << width << " cm\n";
        cout << "Height: " << height << " cm\n";
        cout << "Weight: " << weight << " kg\n";
    }
};

int main() {
    // Create a Laptop object
    Laptop myLaptop(64, 8000, 256000, 3200, 35, 25, 2, 2);
    
    // Display laptop specifications
    myLaptop.display();
    
    return 0;
}

