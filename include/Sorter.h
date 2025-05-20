#ifndef SORTER_H
#define SORTER_H

#include "SortingStrategy.h"
#include <memory>

class Sorter {
public:
    explicit Sorter(std::unique_ptr<SortingStrategy> strategy);
    void setStrategy(std::unique_ptr<SortingStrategy> strategy);
    void sortData(std::vector<int>& data) const;

private:
    std::unique_ptr<SortingStrategy> strategy_;
};

#endif // SORTER_H
