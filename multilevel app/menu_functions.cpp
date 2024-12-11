#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const VE::MenuItems* VE::show_menu(const MenuItems* current) {
    std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
    for (int i = 1; i < current->children_count; i++) {
            std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;
    
    return current->children[user_input];
}

const VE::MenuItems* VE::exit(const MenuItems* current) {
    std::exit(0);
}

const VE::MenuItems* VE::study(const MenuItems* current) {
    std::cout << current->title << std::endl;
    return current->parent;
}

const VE::MenuItems* VE::study_art(const MenuItems* current) {
    std::cout << "Русские художники" << std::endl;

    for (int i = 1; i < current->children_count; i++) {
            std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;
    
    return current->children[user_input];

}

const VE::MenuItems* VE::study_music(const MenuItems* current) {
    std::cout << current->title << std::endl;
    return current->parent;
}

const VE::MenuItems* VE::study_go_back(const MenuItems* current) {
    std::cout << current->title << std::endl;
    return current->parent->parent;
}

const VE::MenuItems* VE::art_Andrew(const MenuItems* current) {
    std::cout << current->title << std::endl;
    return current->parent;
}

const VE::MenuItems* VE::art_Vasiliy(const MenuItems* current) {
    std::cout << current->title << std::endl;
    return current->parent;
}

const VE::MenuItems* VE::art_Ivan(const MenuItems* current) {
    std::cout << current->title << std::endl;
    return current->parent;
}

const VE::MenuItems* VE::art_exit(const MenuItems* current) {
    std::cout << current->title << std::endl;
    return current->parent->parent;
}
