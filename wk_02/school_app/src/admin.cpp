#include "admin.hpp"

#include <iostream>
#include <utility>

Admin::Admin(size_t id,
             std::string name,
             std::string email,
             std::string userType,
             std::string department)
    : User(id, std::move(name), std::move(email), std::move(userType)),
      m_department(std::move(department))
{
}

void Admin::GetUserInfo() const
{
    std::cout << "Admin name: " << m_name << "\n";
    std::cout << "Admin email: " << m_email << "\n";
    std::cout << "Department: " << m_department << "\n";
}

