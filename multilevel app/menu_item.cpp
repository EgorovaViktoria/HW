#include "menu_item.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const VE::MenuItems VE::ART_ANDREW = {
    "1 - Андрей Иванов сын Рублёв", VE::art_Andrew, &VE::STUDY_ART
};
//
const VE::MenuItems VE::ART_VASILIY = {
    "2 - Василий Дмитриевич Поленов", VE::art_Vasiliy, &VE::STUDY_ART
};

const VE::MenuItems VE::ART_IVAN = {
    "3 - Иван Константинович Айвазовский", VE::art_Ivan, &VE::STUDY_ART
};

const VE::MenuItems VE::ART_EXIT = {
    "0 - Выйти в предыдущее меню", VE::art_exit, &VE::STUDY_ART
};
//
namespace {
    const VE::MenuItems* const art_children[] = {
        &VE::ART_EXIT,
        &VE::ART_ANDREW,
        &VE::ART_VASILIY,
        &VE::ART_IVAN
    };
    const int art_size = sizeof(art_children) / sizeof(art_children[0]);
}

const VE::MenuItems VE::STUDY_ART = {
    "1 - Русские художники", VE::study_art, &VE::STUDY, art_children, art_size
};

const VE::MenuItems VE::STUDY_MUSIC = {
    "2 - Русские музыканты", VE::study_music, &VE::STUDY
};

const VE::MenuItems VE::STUDY_GO_BACK = {
    "0 - Выйти в главное меню", VE::study_go_back, &VE::STUDY
};

namespace {
    const VE::MenuItems* const study_children[] = {
        &VE::STUDY_GO_BACK,
        &VE::STUDY_ART,
        &VE::STUDY_MUSIC
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const VE::MenuItems VE::STUDY = {
    "1 - Искусство России", VE::show_menu, &VE::MAIN, study_children, study_size
};
const VE::MenuItems VE::EXIT = {
    "0 - Выйти", VE::exit, &VE::MAIN
};

namespace {
    const VE::MenuItems* const main_children[] = {
        &VE::EXIT,
        &VE::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}
const VE::MenuItems VE::MAIN = {
    nullptr, VE::show_menu, nullptr, main_children, main_size
};
