#pragma once
#include <string>
#include <iostream>
#include "User.h"
#include "Book.h"
#include "Library.h"

class Librarian : public User {
private:
    static int EmployeeNumber;
public:
    Librarian(std::string Name) {
        name = Name;
        ++EmployeeNumber;
    }

    void addBook(Book book, Library& library) {
        std::cout << "Librarian number: " << EmployeeNumber << std::endl;
        library.add(book);
    }

    void removeBook(Book book, Library& library) {
        std::cout << "Librarian number: " << EmployeeNumber << std::endl;
        library.remove(book);
    }

    void display(Library& library) {
        std::cout << "Librarian number: " << EmployeeNumber << std::endl;
        library.display();
    }
};

// Define static member
int Librarian::EmployeeNumber = 0;
