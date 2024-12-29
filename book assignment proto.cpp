#include <iostream>
#include <string>
using namespace std;

// Book Class
class Book {
private:
    int bookID;
    string title;
    string author;
    int quantity;

public:
    Book(){
	  bookID=0;
	  title="";
	  author="";
	  quantity=0;
	   
	}

    friend istream& operator>>(istream& in, Book& book) {
        cout << "Enter Book ID: ";
        in >> book.bookID;
        in.ignore();
        cout << "Enter Title: ";
        getline(in, book.title);
        cout << "Enter Author: ";
        getline(in, book.author);
        cout << "Enter Quantity: ";
        in >> book.quantity;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Book& book) {
        out << "Book ID: " << book.bookID << "\n"
            << "Title: " << book.title << "\n"
            << "Author: " << book.author << "\n"
            << "Quantity: " << book.quantity << "\n";
        return out;
    }

    string getTitle() const { return title; }
};

// BookInventory Class
class BookInventory {
private:
    Book* books;
    int size;
    int capacity;

    void resize() {
        capacity *= 2;
        Book* temp = new Book[capacity];
        for (int i = 0; i < size; i++) {
            temp[i] = books[i];
        }
        delete[] books;
        books = temp;
    }

public:
    BookInventory(int cap = 10) : size(0), capacity(cap) {
        books = new Book[capacity];
    }

    ~BookInventory() { delete[] books; }

    void addBook(const Book& book) {
        if (size == capacity) resize();
        books[size++] = book;
    }

    Book& operator[](int index) { return books[index]; }

    BookInventory operator+(const BookInventory& other) {
        BookInventory combined(size + other.size);
        for (int i = 0; i < size; i++) {
            combined.addBook(books[i]);
        }
        for (int i = 0; i < other.size; i++) {
            combined.addBook(other.books[i]);
        }
        return combined;
    }

    void searchBook(const string& title) {
        for (int i = 0; i < size; i++) {
            if (books[i].getTitle() == title) {
                cout << books[i];
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << books[i] << endl;
        }
    }
};

// Main Function
int main() {
    BookInventory inventory;
    int choice;

    do {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display Inventory\n";
        cout << "3. Search Book by Title\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            Book book;
            cin >> book;
            inventory.addBook(book);
            break;
        }
        case 2:
            inventory.display();
            break;
        case 3: {
            string title;
            cin.ignore();
            cout << "Enter Title: ";
            getline(cin, title);
            inventory.searchBook(title);
            break;
        }
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}


