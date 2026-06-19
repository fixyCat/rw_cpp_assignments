#include "admin.hpp"
#include "school.hpp"
#include "student.hpp"
#include "teacher.hpp"

#include <string>

int main()
{
    School school(0, "Rebel School");

    Student student(
        100,
        "Alex Carter",
        "alex.carter@rebel.com",
        "Student",
        "Year 10"
    );

    Teacher teacher(
        200,
        "Morgan Smith",
        "morgan.smith@rebel.com",
        "Teacher",
        "Computer Science"
    );

    Admin admin(
        300,
        "Jordan Lee",
        "jordan.lee@rebel.com",
        "Admin",
        "Admissions"
    );

    school.AddUser("Alex Carter", &student);
    school.AddUser("Morgan Smith", &teacher);
    school.AddUser("Jordan Lee", &admin);

    // Just debugging the map
    //school.printUserMap();

    school.GetAllUsers();

    return 0;
}