#pragma once
#include <string>
#include <iostream>

class Book {
public:
    std::string Title;
    std::string Author;
    int Year;

    Book(std::string title, std::string author, int year)
            : Title(title), Author(author), Year(year) {}

    friend std::ostream& operator<<(std::ostream& os, const Book& book) {
        os << "Title: " << book.Title << ", Author: " << book.Author << ", Year: " << book.Year;
        return os;
    }

    bool operator==(const Book& other) const {
        return Title == other.Title && Author == other.Author && Year == other.Year;
    }
};
