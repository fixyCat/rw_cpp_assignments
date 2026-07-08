//
// Created by Administrator on 18/06/2026.
//

# pragma once
#include "item.h"

class Book: public Item
{
private:
    std::string m_title;
    std::string m_author;
    std::string m_publisher;

public:
    Book(
        size_t ID,
        float WEIGHT,
        std::string &NAME,
        std::string &TYPE,
        std::string &TITLE,
        std::string &AUTHOR,
        std::string &PUBLISHER);

    void GetItemInfo() const override;
};