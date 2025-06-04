#include <iostream>
using namespace std;

class Product {
public:
    string name;
    double price;
    int quantity;

    // Default constructor
    Product() {
        name = "";
        price = 0.0;
        quantity = 0;
    }

    // Parameterized constructor
    Product(string n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    double totalValue() {
        return price * quantity;
    }
};

class Inventory {
private:
    Product products[5];
    int count = 0;
public:
    void addProduct(Product p) {
        if (count < 5) {
            products[count] = p;
            count++;
        }
    }

    void displayHighValueProducts(double threshold) {
        cout << "Products with total value above $" << threshold << ":\n";
        for (int i = 0; i < count; i++) {
            if (products[i].totalValue() > threshold) {
                cout << "Name: " << products[i].name << ", Price: $" << products[i].price 
                     << ", Quantity: " << products[i].quantity << ", Total Value: $" << products[i].totalValue() << endl;
            }
        }
    }
};

int main() {
    Inventory inventory;
    string name;
    double price;
    int quantity;

    for (int i = 0; i < 5; i++) {
        cout << "Enter product " << i + 1 << " name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;
        inventory.addProduct(Product(name, price, quantity));
    }

    inventory.displayHighValueProducts(500);
    return 0;
}

