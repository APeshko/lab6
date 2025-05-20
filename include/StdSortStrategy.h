#ifndef STD_SORT_STRATEGY_H
#define STD_SORT_STRATEGY_H

#include "SortingStrategy.h"

class StdSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>& data) const override;
};

#endif // STD_SORT_STRATEGY_H
