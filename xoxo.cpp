#include <iostream>

char a = ' ';
char b = ' ';
char c = ' ';
char d = ' ';
char e = ' ';
char f = ' ';
char g = ' ';
char h = ' ';
char i = ' ';

int main(int, char **)
{
    std::cout << "1 | 2 | 3" << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "4 | 5 | 6" << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "7 | 8 | 9" << std::endl;

    std::cout << a << " | " << b << " | " << c << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << a << " | " << b << " | " << c << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << a << " | " << b << " | " << c << std::endl;
    //   std::cout << "\x1b[1;mHell" << std::endl;

    //   for (int i = 0; i < 256; i++)
    //  {
    //     std::cout << "\x1b[38;5;" << i << "m " << i;
    //  }
    return 0;
}