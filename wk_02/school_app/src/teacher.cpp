#include "teacher.hpp"

#include <iostream>
#include <utility>

Teacher::Teacher(size_t id,
                 std::string name,
                 std::string email,
                 std::string userType,
                 std::string subject)
    : User(id, std::move(name), std::move(email), std::move(userType)),
      m_subject(std::move(subject))
{
}

void Teacher::GetUserInfo() const
{
    std::cout << "Teacher name: " << m_name << "\n";
    std::cout << "Teacher email: " << m_email << "\n";
    std::cout << "Subject: " << m_subject << "\n";
}