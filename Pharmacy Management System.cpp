#include <iostream>
#include <string>
using namespace std;

struct Medicine {
    string id;
    string name;
    int quantity;
    double price;
    Medicine* next;
};

Medicine* head = NULL;

void addMedicine() {
    Medicine* m = new Medicine;

    cout << "Enter ID: ";
    cin >> m->id;
    cin.ignore(1000, '\n');

    cout << "Enter Name: ";
    getline(cin, m->name);

    cout << "Enter Quantity: ";
    cin >> m->quantity;

    cout << "Enter Price: ";
    cin >> m->price;

    m->next = NULL;

    if (head == NULL)
        head = m;
    else {
        Medicine* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = m;
    }

    cout << "Medicine added successfully!\n";
}

class Stack {
    Medicine* arr[50];
    int top;

public:
    Stack() { top = -1; }

    void clear() { top = -1; }

    void push(Medicine* m) {
        if (top == 49)
            cout << "Stack Overflow!\n";
        else
            arr[++top] = m;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty!\n";
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << arr[i]->name
                 << " | Qty: " << arr[i]->quantity
                 << " | Price: " << arr[i]->price << endl;
        }
    }
};

Stack displayStack;
Stack soldStack;

void showMedicines() {
    if (head == NULL) {
        cout << "No medicines available!\n";
        return;
    }

    displayStack.clear();

    Medicine* temp = head;
    while (temp != NULL) {
        displayStack.push(temp);
        temp = temp->next;
    }

    cout << "\n--- Medicines (Stack View) ---\n";
    displayStack.display();
}

void sellMedicine() {
    if (head == NULL) {
        cout << "No medicines available!\n";
        return;
    }

    string name;
    cin.ignore(1000, '\n');
    cout << "Enter medicine name to sell: ";
    getline(cin, name);

    Medicine* temp = head;
    while (temp != NULL) {
        if (temp->name == name && temp->quantity > 0) {
            temp->quantity--;
            soldStack.push(temp);
            cout << "Medicine sold successfully!\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Medicine not found or out of stock!\n";
}

void showSoldMedicines() {
    cout << "\n--- Sold Medicines ---\n";
    soldStack.display();
}

class Queue {
    string arr[50];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(string name) {
        if (rear == 49) {
            cout << "Queue Overflow!\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = name;
        cout << "Customer added!\n";
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Serving customer: " << arr[front++] << endl;
    }
};

Queue customerQueue;

struct BSTNode {
    Medicine* med;
    BSTNode* left;
    BSTNode* right;
};

BSTNode* root = NULL;

BSTNode* insertBST(BSTNode* node, Medicine* m) {
    if (node == NULL) {
        BSTNode* n = new BSTNode;
        n->med = m;
        n->left = n->right = NULL;
        return n;
    }

    if (m->price < node->med->price)
        node->left = insertBST(node->left, m);
    else
        node->right = insertBST(node->right, m);

    return node;
}

void buildBST() {
    root = NULL;
    Medicine* temp = head;
    while (temp != NULL) {
        root = insertBST(root, temp);
        temp = temp->next;
    }
    cout << "BST created successfully!\n";
}

void inorder(BSTNode* node) {
    if (node == NULL) return;
    inorder(node->left);
    cout << node->med->name << " - " << node->med->price << endl;
    inorder(node->right);
}

void preorder(BSTNode* node) {
    if (node == NULL) return;
    cout << node->med->name << " - " << node->med->price << endl;
    preorder(node->left);
    preorder(node->right);
}

void postorder(BSTNode* node) {
    if (node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    cout << node->med->name << " - " << node->med->price << endl;
}

int main() {
    int choice;

    do {
        cout << "\n--- PHARMACY MANAGEMENT SYSTEM ---\n";
        cout << "1. Add Medicine\n";
        cout << "2. Show Medicines\n";
        cout << "3. Sell Medicine\n";
        cout << "4. Show Sold Medicines\n";
        cout << "5. Add Customer\n";
        cout << "6. Serve Customer\n";
        cout << "7. Build BST\n";
        cout << "8. BST Inorder\n";
        cout << "9. BST Preorder\n";
        cout << "10. BST Postorder\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addMedicine(); break;
            case 2: showMedicines(); break;
            case 3: sellMedicine(); break;
            case 4: showSoldMedicines(); break;
            case 5: {
                string cname;
                cin.ignore(1000, '\n');
                cout << "Enter customer name: ";
                getline(cin, cname);
                customerQueue.enqueue(cname);
                break;
            }
            case 6: customerQueue.dequeue(); break;
            case 7: buildBST(); break;
            case 8: inorder(root); break;
            case 9: preorder(root); break;
            case 10: postorder(root); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}

