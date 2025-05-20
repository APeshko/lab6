#ifndef SORTING_STRATEGY_H
#define SORTING_STRATEGY_H

#include <vector>

class SortingStrategy {
public:
    virtual ~SortingStrategy() = default;
    virtual void sort(std::vector<int>& data) const = 0;
};

#endif // SORTING_STRATEGY_H
