#ifndef QUICK_SORT_STRATEGY_H
#define QUICK_SORT_STRATEGY_H

#include "SortingStrategy.h"

class QuickSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>& data) const override;

private:
    void quickSort(std::vector<int>& data, int low, int high) const;
    int partition(std::vector<int>& data, int low, int high) const;
};

#endif // QUICK_SORT_STRATEGY_H
