#include <iostream>
#include <cmath>

int main()
{ 
    int d, m, g;
    std::cout << "введите дату дня" << std::endl;
    std::cin >> d;
    std::cout << "введите число месяца" << std::endl;
    std::cin >> m;
    std::cout << "введите год" << std::endl;
    std::cin >> g;

    
    int y = g % 100;
    int c = g / 100;
    int s = (d + ((13 * m - 1) / 5) + (y / 4) + (c / 4) - 2 * c + 777) % 7;
    
    switch (s)
    {
        case 0:
            std::cout << "воскресенье" << std::endl;
            break;
        case 1:
            std::cout << "понедельник" << std::endl;
            break;
        case 2:
            std::cout << "вторник" << std::endl;
            break;
        case 3:
            std::cout << "среда" << std::endl;
            break;
        case 4:
            std::cout << "четверг" << std::endl;
            break;
        case 5:
            std::cout << "пятница" << std::endl;
            break;
        case 6:
            std::cout << "суббота" << std::endl;
            break;
    }

    system("pause");
    return 0;
}
