#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<Book> borrowedBooks;
public:
    void add(Book book) {
        if (books.size() < 100) {
            books.push_back(book);
            std::cout << "Book added successfully\n";
        } else {
            std::cout << "You cannot add more books\n";
        }
    }

    void borrow(Book book) {
        if (borrowedBooks.size() < 50) {
            borrowedBooks.push_back(book);
        } else {
            std::cout << "You cannot borrow more books\n";
        }
    }

    void display() {
        std::cout << "Do you want to see all books (1) or borrowed books (2)?\n";
        std::cout << "Enter 1 or 2: ";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "All books:\n";
            for (const auto& book : books) {
                std::cout << book << std::endl;
            }
        } else if (choice == 2) {
            std::cout << "Borrowed books:\n";
            for (const auto& book : borrowedBooks) {
                std::cout << book << std::endl;
            }
        } else {
            std::cout << "Invalid choice.\n";
        }
    }

    void remove(const Book& book) {
        auto it = std::find(books.begin(), books.end(), book);
        if (it != books.end()) {
            books.erase(it);
            std::cout << "Book removed successfully.\n";
        } else {
            std::cout << "Book not found.\n";
        }
    }
};
