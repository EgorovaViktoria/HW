#include <algorithm>
#include <cmath>
#include <set>
#include <vector>


namespace shella {
// Генерирует последовательность 3-гладких чисел в убывающем порядке
int* generate_3smooth_gaps(int arr_size) {
    std::set<int> gaps;
    for (int p = 0; std::pow(2, p) <= arr_size; ++p) {
        for (int q = 0; std::pow(2, p) * std::pow(3, q) <= arr_size; ++q) {
            gaps.insert(static_cast<int>(std::pow(2, p) * std::pow(3, q)));
        }
    }

    int* nums = new int[arr_size];

    {
        int i = 0;
        for (int el : gaps)
        {
            nums[i] = el;
            i++;
        }
    }

    return nums; 
}

// Сортировка Шелла
void shell_sort(int* arr, const int* const gaps, int arr_size) {
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

}