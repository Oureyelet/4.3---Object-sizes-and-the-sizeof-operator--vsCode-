#include <iostream>

void message()
{
    std::cout << "Hello !" << '\n' << std::endl;
}

int whats_byte_is()
{
    int x{0};
    std::cout << "int x is " << sizeof(x) << " bytes\n" << std::endl;
    return 0;
}