#pragma once

#include <vector>

namespace shella {
    int* generate_3smooth_gaps(int arr_size);
    void shell_sort(int* arr, const int* const gaps, int arr_size);
}