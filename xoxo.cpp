#include <iostream>

int main(int, char **)
{

    std::cout << "\x1b[1;mHell" << std::endl;

    for (int i = 0; i < 256; i++)
    {
        std::cout << "\x1b[38;5;" << i << "m Jajo ";
    }
    return 0;
}