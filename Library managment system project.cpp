#include <iostream>
#include "Book.h"
#include "Library.h"
#include "LibraryUser.h"
#include "Librarian.h"

using namespace std;

int main() {
    cout << "Welcome to our Library management system\n";
    cout << "Are you a Librarian (L) or Regular User (R)? ";

    char c;
    cin >> c;
    char d = toupper(c);

    Library ll;

    if (d == 'L') {
        cout << "Enter your name please\n";
        string name;
        cin >> name;
        Librarian l(name);

        cout << "Hi " << name << endl;
        cout << "What would you like to do:\n";
        cout << "1) Add book\n";
        cout << "2) Remove book\n";
        cout << "3) Display list of books\n";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter the book details in this order (title of book, Author of book, Year of publish): ";
                string bookName;
                string Author;
                int Year;
                cin >> bookName >> Author >> Year;
                Book book(bookName, Author, Year);
                l.addBook(book, ll);
                break;
            }
            case 2: {
                cout << "Enter the book details in this order (title of book, Author of book, Year of publish): ";
                string bookName;
                string Author;
                int Year;
                cin >> bookName >> Author >> Year;
                Book book(bookName, Author, Year);
                l.removeBook(book, ll);
                break;
            }
            case 3: {
                l.display(ll);
                break;
            }
            default: {
                cout << "Invalid choice\n";
                break;
            }
        }
    } else if (d == 'R') {
        cout << "Enter your name please\n";
        string name;
        cin >> name;
        LibraryUser u;

        cout << "Hi " << name << endl;
        cout << "What would you like to do:\n";
        cout << "1) Add book\n";
        cout << "2) Display list of books\n";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter the book details in this order (title of book, Author of book, Year of publish): ";
                string bookName;
                string Author;
                int Year;
                cin >> bookName >> Author >> Year;
                Book book(bookName, Author, Year);
                u.addBook(book, ll);
                break;
            }
            case 2: {
                u.display(ll);
                break;
            }
            default: {
                cout << "Invalid choice\n";
                break;
            }
        }
    } else {
        cout << "Invalid input\n";
    }

    return 0;
}
