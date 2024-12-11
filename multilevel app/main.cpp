#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_item.hpp"

int main () {
    std::setlocale(LC_ALL, "");
  
    const VE::MenuItems* current = &VE::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}
