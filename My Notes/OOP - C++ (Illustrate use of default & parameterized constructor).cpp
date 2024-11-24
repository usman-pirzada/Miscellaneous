#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    // Default constructor
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
        cout << "Default constructor called: Book created with default values.\n";
    }

    // Parameterized constructor
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
        cout << "Parameterized constructor called: Book created with provided values.\n";
    }

    // Method to display book details
    void display() {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: Rs. " << price << endl;
    }
};

int main() {
    // Using the default constructor
    Book book1;  // Default constructor called here
    book1.display();

    cout << "\n----------------------------------\n";

    // Using the parameterized constructor
    book1 = Book("C++ Programming", "Bjarne Stroustrup", 499.99);  // Parameterized constructor called here
    book1.display();

    return 0;
}