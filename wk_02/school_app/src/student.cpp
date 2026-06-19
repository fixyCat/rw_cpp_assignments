#include "student.hpp"

#include <iostream>
#include <utility>

Student::Student(size_t id,
                 std::string name,
                 std::string email,
                 std::string userType,
                 std::string gradeLevel)
    : User(id, std::move(name), std::move(email), std::move(userType)),
      m_gradeLevel(std::move(gradeLevel))
{
}

void Student::GetUserInfo() const
{
    std::cout << "Student name: " << m_name << "\n";
    std::cout << "Student email: " << m_email << "\n";
    std::cout << "Grade: " << m_gradeLevel << "\n";
}