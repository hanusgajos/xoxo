#include <iostream>

char a[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int x = 0;
int o = 0;

bool winx()
{
    std::cout << "tgtggttg" << std::endl;

    if (a[0] == 'X' && a[1] == 'X' && a[2] == 'X')
    {
        return true;
    }
    else if (a[0] == 'X' && a[6] == 'X' && a[3] == 'X')
    {
        return true;
    }
    else if (a[0] == 'X' && a[4] == 'X' && a[8] == 'X')
    {
        return true;
    }
    else if (a[6] == 'X' && a[4] == 'X' && a[2] == 'X')
    {
        return true;
    }
    else if (a[3] == 'X' && a[4] == 'X' && a[5] == 'X')
    {
        return true;
    }
    else if (a[1] == 'X' && a[4] == 'X' && a[7] == 'X')
    {
        return true;
    }
    else if (a[6] == 'X' && a[7] == 'X' && a[8] == 'X')
    {
        return true;
    }
    else if (a[2] == 'X' && a[5] == 'X' && a[8] == 'X')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool wino()
{
    if (a[0] == 'O' && a[1] == 'O' && a[2] == 'O')
    {
        return true;
    }
    else if (a[0] == 'O' && a[6] == 'O' && a[3] == 'O')
    {
        return true;
    }
    else if (a[0] == 'O' && a[4] == 'O' && a[8] == 'O')
    {
        return true;
    }
    else if (a[6] == 'O' && a[4] == 'O' && a[2] == 'O')
    {
        return true;
    }
    else if (a[3] == 'O' && a[4] == 'O' && a[5] == 'O')
    {
        return true;
    }
    else if (a[1] == 'O' && a[4] == 'O' && a[7] == 'O')
    {
        return true;
    }
    else if (a[6] == 'O' && a[7] == 'O' && a[8] == 'O')
    {
        return true;
    }
    else if (a[2] == 'O' && a[5] == 'O' && a[8] == 'O')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int, char **)
{
    // start here to show board
    // modyfying regular boaard to make it a "board game"
    // best of three wins, giving points after each round
    // i didnt have time to make a new board game, writing this on thursday, going to mke it point based due to having multiple rounds
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
            std::cin >> x;
            continue;
        }
        if (!(x >= 1 && x <= 9))
        {
            std::cerr << "wrong input" << std::endl;
            std::cin >> x;
            continue;
        }

        else
        {

            a[x - 1] = 'X';
        }
        if (winx())
        {
            std::cout << "Gracz 1 wygrał" << std::endl;
            std::cout << a[0] << " | " << a[1] << " | " << a[2] << std::endl;
            std::cout << "----------" << std::endl;
            std::cout << a[3] << " | " << a[4] << " | " << a[5] << std::endl;
            std::cout << "----------" << std::endl;
            std::cout << a[6] << " | " << a[7] << " | " << a[8] << std::endl;
            break;
        }

        std::cout << "Player 2's turn:" << std::endl;
        std::cout << a[0] << " | " << a[1] << " | " << a[2] << std::endl;
        std::cout << "----------" << std::endl;
        std::cout << a[3] << " | " << a[4] << " | " << a[5] << std::endl;
        std::cout << "----------" << std::endl;
        std::cout << a[6] << " | " << a[7] << " | " << a[8] << std::endl;
        std::cin >> o;
        if (std::cin.good())
        {
            if (!(o >= 1 && o <= 9))
            {
                std::cerr << "wrong input" << std::endl;
                continue;
            }
            if (a[o - 1] != ' ')
            {
                std::cerr << "taken" << std::endl;
                continue;
            }

            a[o - 1] = 'O';
        }

        else
        {
            std::cerr << "wrong input" << std::endl;
            std::cin >> o;
            continue;
        }

        if (wino())
        {
            std::cout << "Gracz 2 wygrał" << std::endl;
            std::cout << a[0] << " | " << a[1] << " | " << a[2] << std::endl;
            std::cout << "----------" << std::endl;
            std::cout << a[3] << " | " << a[4] << " | " << a[5] << std::endl;
            std::cout << "----------" << std::endl;
            std::cout << a[6] << " | " << a[7] << " | " << a[8] << std::endl;
            break;
        }
        //   std::cout << "\x1b[1;mHell" << std::endl;

        //   for (int i = 0; i < 256; i++)
        //  {
        //     std::cout << "\x1b[38;5;" << i << "m " << i;
        //  }
    }
}
