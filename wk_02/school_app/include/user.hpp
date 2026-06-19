#pragma once

#include <string>

class User
{
protected:
    size_t m_id;
    std::string m_name;
    std::string m_email;
    std::string m_userType;

public:
    User(size_t id, std::string name, std::string email, std::string userType);
    virtual ~User() = default;

    virtual void GetUserInfo() const = 0;
};