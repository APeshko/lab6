#include "QuickSortStrategy.h"

void QuickSortStrategy::sort(std::vector<int>& data) const {
    if (!data.empty()) {
        quickSort(data, 0, static_cast<int>(data.size()) - 1);
    }
}

void QuickSortStrategy::quickSort(std::vector<int>& data, int low, int high) const {
    if (low < high) {
        int pi = partition(data, low, high);
        quickSort(data, low, pi - 1);
        quickSort(data, pi + 1, high);
    }
}

int QuickSortStrategy::partition(std::vector<int>& data, int low, int high) const {
    int pivot = data[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; ++j) {
        if (data[j] < pivot) {
            ++i;
            std::swap(data[i], data[j]);
        }
    }
    std::swap(data[i + 1], data[high]);
    return i + 1;
}
