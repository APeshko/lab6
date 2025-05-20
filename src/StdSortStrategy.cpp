#include "StdSortStrategy.h"
#include <algorithm>

void StdSortStrategy::sort(std::vector<int>& data) const {
    std::sort(data.begin(), data.end());
}
