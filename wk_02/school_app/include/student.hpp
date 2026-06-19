#pragma once

#include "user.hpp"

#include <string>

class Student : public User
{
private:
    std::string m_gradeLevel;

public:
    Student(size_t id,
            std::string name,
            std::string email,
            std::string userType,
            std::string gradeLevel);

    void GetUserInfo() const override;
};