#include "shellsort_functions.hpp"

#include <algorithm>
#include <cmath>
#include <set>

// Генерирует последовательность 3-гладких чисел в убывающем порядке
void shella::generate_3smooth_gaps(int* const nums, const int arr_size) {
    std::set<int> gaps;
    for (int p = 0; std::pow(2, p) <= arr_size; ++p) {
        for (int q = 0; std::pow(2, p) * std::pow(3, q) <= arr_size; ++q) {
            gaps.insert(static_cast<int>(std::pow(2, p) * std::pow(3, q)));
        }
    }

    {
        int i = 0;
        for (int el : gaps)
        {
            nums[i] = el;
            i++;
        }
    }
}

void shella::shell_sort(int* const arr, const int* const gaps, const int arr_size) {
    for (int i = 0; i < arr_size; i++)
    {
        int gap = gaps[i];
        for (int i = gap; i < arr_size; ++i) {
            int temp = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}
