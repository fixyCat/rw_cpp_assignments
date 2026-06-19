#pragma once

#include "user.hpp"

#include <string>

class Teacher : public User
{
private:
    std::string m_subject;

public:
    Teacher(size_t id,
            std::string name,
            std::string email,
            std::string userType,
            std::string subject);

    void GetUserInfo() const override;
};