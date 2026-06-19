#include "user.hpp"

#include <utility>

User::User(size_t id, std::string name, std::string email, std::string userType)
    : m_id(id),
      m_name(std::move(name)),
      m_email(std::move(email)),
      m_userType(std::move(userType)) {}