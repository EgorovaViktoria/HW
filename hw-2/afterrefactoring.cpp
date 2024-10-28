#include <iostream>

int main()
{
    int day, month, year;
    std::cout << "введите дату дня" << std::endl;
    std::cin >> day;

    std::cout << "введите число месяца" << std::endl;
    std::cin >> month;

    std::cout << "введите год" << std::endl;
    std::cin >> year;


    int century = year / 100;
    int result = 
        (day + ((13 * month - 1) / 5)
        + year
        + (year / 4) 
        + (century / 4) 
        - 2 * century 
        + 777) 
        % 7;

    switch (result)
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

    return 0;
}
