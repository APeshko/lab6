#include "InsertionSortStrategy.h"

void InsertionSortStrategy::sort(std::vector<int>& data) const {
    for (size_t i = 1; i < data.size(); ++i) {
        int key = data[i];
        int j = static_cast<int>(i) - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            --j;
        }
        data[j + 1] = key;
    }
}
