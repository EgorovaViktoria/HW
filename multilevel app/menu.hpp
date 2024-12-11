#pragma once

namespace VE {
    struct MenuItems {
        const char* const title;
        const MenuItems* (*func)(const MenuItems* current);

        const MenuItems* parent;

        const MenuItems* const *children;
        const int children_count;
    };
}
