#ifndef BUBBLE_SORT_STRATEGY_H
#define BUBBLE_SORT_STRATEGY_H

#include "SortingStrategy.h"

class BubbleSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>& data) const override;
};

#endif // BUBBLE_SORT_STRATEGY_H
