#include "school.hpp"
#include <iostream>
#include <utility>

School::School(size_t id, std::string name)
    : m_id(id),
      m_name(std::move(name))
{
}

void School::AddUser(std::string userName, User* user)
{
    m_users[std::move(userName)] = user;
}

void School::GetAllUsers() const
{
    std::cout << "School: " << m_name << "\n\n";

    for (const auto& userPair : m_users)
    {
        //std::cout << "User key: " << userPair.first << "\n";
        userPair.second->GetUserInfo();
        std::cout << "\n";
    }
}

void School::printUserMap() const
{
    for (const auto& userPair : m_users)
    {
        std::cout << "User Key: " << userPair.first << " ";
        std::cout << "User Value: " << userPair.second << "\n";
    }
}
