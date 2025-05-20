#include "Sorter.h"

Sorter::Sorter(std::unique_ptr<SortingStrategy> strategy) 
    : strategy_(std::move(strategy)) {}

void Sorter::setStrategy(std::unique_ptr<SortingStrategy> strategy) {
    strategy_ = std::move(strategy);
}

void Sorter::sortData(std::vector<int>& data) const {
    if (strategy_) {
        strategy_->sort(data);
    }
}
