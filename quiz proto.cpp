#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID; 
    string title; 
    string author; 
    int price;
    static int total; 

public:
     
    Book(int bi, string tit, string au, int pr) : bookID(bi), title(tit), author(au), price(pr) {
        total++;
    }

    
    void display() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }

     
    int operator+(const Book &b) {
    	int priceof=price + b.price;
        return priceof; 
    }

     
    void operator++() {
        price =price + (price / 10); 
    }

     
    friend void comparePrice(const Book &b1, const Book &b2);

    
    static int getTotalBooks() {
        return total;
    }
};
 
 
int Book::total = 0;

 
void comparePrice(const Book &b1, const Book &b2) {
    if (b1.price > b2.price) {
        cout << "The more expensive book is: " << b1.title << " by " << b1.author << " with price " << b1.price << endl;
    } else if (b1.price < b2.price) {
        cout << "The more expensive book is: " << b2.title << " by " << b2.author << " with price " << b2.price << endl;
    } else {
        cout << "Both books have the same price." << endl;
    }
}

int main() {
     
    Book bk1(1, "MMS1", "Mikran", 2000);
    Book bk2(2, "MMS2", "Mikran", 2100);
    Book bk3(3, "MMS3", "Mikran", 2200);

    bk1.display();
    cout<<"***************************************************"<<endl;
    bk2.display();
    cout<<"***************************************************"<<endl;
    bk3.display();
    cout<<"***************************************************"<<endl;
 
    cout << "Comparing prices of Book 1 and Book 2:" << endl;
    comparePrice(bk1, bk2);
    cout<<"***************************************************"<<endl;
     
    int totalPrice = bk1 + bk2;
    cout << "Total price of Book 1 and Book 2: " << totalPrice << endl;
    cout<<"***************************************************"<<endl;
    
    cout << "After increasing the price of Book 3 by 10%:" << endl;
    ++bk3;
    bk3.display();
    cout<<"***************************************************"<<endl;
     
    cout << "Total number of books created: " << Book::getTotalBooks() << endl;
    cout<<"***************************************************"<<endl;

    return 0;
}
