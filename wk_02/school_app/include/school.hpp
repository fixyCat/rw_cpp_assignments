#pragma once

#include "user.hpp"

#include <string>
#include <unordered_map>

class School
{
private:
    size_t m_id;
    std::string m_name;
    std::unordered_map<std::string, User*> m_users;

public:
    School(size_t id, std::string name);

    void AddUser(std::string userName, User* user);
    void GetAllUsers() const;
    void printUserMap() const;
};