#include <iostream>

char a[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int x;
int o;

int main(int, char **)
{
    // start here to show board
    std::cout << "1 | 2 | 3" << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "4 | 5 | 6" << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "7 | 8 | 9" << std::endl;
    for (char c : a)
    {

        std::cout << "Player 1's turn:" << std::endl;
        std::cout << a[0] << " | " << a[1] << " | " << a[2] << std::endl;
        std::cout << "----------" << std::endl;
        std::cout << a[3] << " | " << a[4] << " | " << a[5] << std::endl;
        std::cout << "----------" << std::endl;
        std::cout << a[6] << " | " << a[7] << " | " << a[8] << std::endl;
        std::cin >> x;
        if (a[x - 1] != ' ')
        {
            std::cerr << "taken" << std::endl;
            return false;
        }
        if (!(x >= 1 && x <= 9))
        {
            std::cerr << "wrong input" << std::endl;
            return false;
        }
        else
        {

            a[x - 1] = 'X';
        }

        std::cout << "Player 2's turn:" << std::endl;
        std::cout << a[0] << " | " << a[1] << " | " << a[2] << std::endl;
        std::cout << "----------" << std::endl;
        std::cout << a[3] << " | " << a[4] << " | " << a[5] << std::endl;
        std::cout << "----------" << std::endl;
        std::cout << a[6] << " | " << a[7] << " | " << a[8] << std::endl;
        std::cin >> o;

        if (a[o - 1] != ' ')
        {
            std::cerr << "taken" << std::endl;
            return false;
        }
        if (!(o >= 1 && o <= 9))
        {
            std::cerr << "wrong input" << std::endl;
            return false;
        }
        else
        {

            a[o - 1] = 'O';
        }
    }
    //   std::cout << "\x1b[1;mHell" << std::endl;

    //   for (int i = 0; i < 256; i++)
    //  {
    //     std::cout << "\x1b[38;5;" << i << "m " << i;
    //  }
    return 0;
}