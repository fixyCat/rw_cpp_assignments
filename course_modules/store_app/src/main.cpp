//
// Created by Administrator on 13/06/2026.
//
#include "book.h"
#include <cstddef>

#include "../include/book.h"

int main()
{
    size_t id = 001;
    float weight = 2.00;
    std::string name = "Gabriel";
    std::string author = "Some auth";
    std::string title = "The Hobbit";
    std::string type = "Book";
    std::string publisher = "Some publisher";

    Book book1 = Book(id, weight,name, author, title, type, publisher);
    book1.GetItemInfo();
    return 0;
}
