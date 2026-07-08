//
// Created by Administrator on 14/06/2026.
//
#include "item.h"

#include <iostream>
#include <ostream>

Item::Item(
    size_t ID,
    float WEIGHT,
    std::string &NAME,
    std::string &TYPE
    ):  m_id(ID),
        m_weight(WEIGHT),
        m_name(std::move(NAME)),
        m_type(std::move(TYPE)) {}

void Item::GetItemInfo() const
{
    std::cout << "Item ID: " << m_id << std::endl;
    std::cout << "Item Weight: " << m_weight << std::endl;
}
