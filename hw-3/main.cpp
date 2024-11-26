#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>

#include "shellsort_functions.hpp"



int main() {
    for (int arrays_counter = 0; arrays_counter  < 4; ++arrays_counter ) {
        int arr_size;
        std::cout << "Введите размер массива" << std::endl;
        std::cin >> arr_size;

        // Исходный массив
        // std::vector<int> shell_sorted_array(arr_size, 0);
        int shell_sorted_array[arr_size]; 

        std::mt19937 mt(std::chrono::steady_clock::now().time_since_epoch().count()); 
        for (int i = 0; i < arr_size; ++i) {
            shell_sorted_array[i] = (mt() % 100) + 100;
        }


        auto start = std::chrono::steady_clock::now();
        int* gaps = shella::generate_3smooth_gaps(arr_size);
        shella::shell_sort(shell_sorted_array, gaps, arr_size);
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> period = end - start;
        std::cout << "Time for shell sort: " << period.count() << std::endl;
    }
    return 1;
}

