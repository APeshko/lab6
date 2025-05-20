#ifndef INSERTION_SORT_STRATEGY_H
#define INSERTION_SORT_STRATEGY_H

#include "SortingStrategy.h"

class InsertionSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>& data) const override;
};

#endif // INSERTION_SORT_STRATEGY_H
