#pragma once

#include "menu.hpp"

namespace VE {
        const MenuItems* show_menu(const MenuItems* current);

        const MenuItems* exit(const MenuItems* current);
        const MenuItems* study(const MenuItems* current);

        const MenuItems* study_art(const MenuItems* current);
        const MenuItems* study_music(const MenuItems* current);
        const MenuItems* study_go_back(const MenuItems* current);

        const MenuItems* art_Andrew(const MenuItems* current);
        const MenuItems* art_Vasiliy(const MenuItems* current);
        const MenuItems* art_Ivan(const MenuItems* current);
        const MenuItems* art_exit(const MenuItems* current);

}
