#include "BubbleSortStrategy.h"
#include <algorithm>

void BubbleSortStrategy::sort(std::vector<int>& data) const {
    bool swapped;
    for (size_t i = 0; i < data.size() - 1; ++i) {
        swapped = false;
        for (size_t j = 0; j < data.size() - i - 1; ++j) {
            if (data[j] > data[j + 1]) {
                std::swap(data[j], data[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
