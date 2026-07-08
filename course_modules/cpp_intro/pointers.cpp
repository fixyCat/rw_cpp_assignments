#include <iostream>

class TestClass
{
public:
    int value;
};


int main()
{
    int* ptr = nullptr;

    if(ptr)
    {
        std::cout << "Pointer is valid" << std::endl;
    }
    else
    {
        std::cout << "Pointer is null" << std::endl;
    }

}