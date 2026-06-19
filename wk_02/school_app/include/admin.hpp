#pragma once

#include "user.hpp"

#include <string>

class Admin : public User
{
private:
    std::string m_department;

public:
    Admin(size_t id,
          std::string name,
          std::string email,
          std::string userType,
          std::string department);

    void GetUserInfo() const override;
};