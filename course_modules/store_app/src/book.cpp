//
// Created by Administrator on 18/06/2026.
//

#include "book.h"

#include <algorithm>
#include <iostream>
#include <ostream>


Book::Book(
    size_t ID,
    float WEIGHT,
    std::string &NAME,
    std::string &TYPE,
    std::string &TITLE,
    std::string &AUTHOR,
    std::string &PUBLISHER):
        Item(ID, WEIGHT, NAME, TYPE),
        m_title(std::move(TITLE)), m_author(std::move(AUTHOR)), m_publisher(std::move(PUBLISHER)) {}

void Book::GetItemInfo() const
{
    std::cout << "Book Name is: " << m_name << std::endl;
    std::cout << "Book Title is: " << m_title << std::endl;
    std::cout << "Book Author is: " << m_author << std::endl;
    std::cout << "Book Publisher is: " << m_publisher << std::endl;
}