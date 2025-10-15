#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    double price;
public:
    Product(int i, string n, double p) : id(i), name(n), price(p) {}

    void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
    }

    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }
};

class Inventory {
private:
    vector<Product> products;
public:
    void addProduct(int id, string name, double price) {
        products.emplace_back(id, name, price);
    }

    void displayAll() const {
        cout << "--- Inventory ---" << endl;
        for (const auto& p : products) {
            p.display();
        }
    }

    void searchProduct(string name) const {
        for (const auto& p : products) {
            if (p.getName() == name) {
                cout << "Product found: ";
                p.display();
                return;
            }
        }
        cout << "Product not found.\n";
    }

    void deleteProduct(int id) {
        for (auto it = products.begin(); it != products.end(); ++it) {
            if (it->getId() == id) {
                products.erase(it);
                cout << "Product deleted.\n";
                return;
            }
        }
        cout << "Product ID not found.\n";
    }
};

int main() {
    Inventory inv;
    int choice;

    while (true) {
        cout << "\n1. Add Product\n2. Show Inventory\n3. Search Product\n4. Delete Product\n5. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string name;
            double price;
            cout << "Enter ID, Name, Price: ";
            cin >> id >> name >> price;
            inv.addProduct(id, name, price);
        } else if (choice == 2) {
            inv.displayAll();
        } else if (choice == 3) {
            string name;
            cout << "Enter product name to search: ";
            cin >> name;
            inv.searchProduct(name);
        } else if (choice == 4) {
            int id;
            cout << "Enter product ID to delete: ";
            cin >> id;
            inv.deleteProduct(id);
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
