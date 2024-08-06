#pragma once
#include "User.h"
#include "Library.h"
#include "Book.h"

class LibraryUser : public User {
public:
    void addBook(Book book, Library& library) {
        library.add(book);
    }

    void display(Library& library) {
        library.display();
    }
};
