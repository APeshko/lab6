#include <iostream>
#include <vector>
#include <memory>
#include "Sorter.h"
#include "BubbleSortStrategy.h"
#include "QuickSortStrategy.h"
#include "StdSortStrategy.h"
#include "InsertionSortStrategy.h"

void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data = {5, 2, 9, 1, 5, 6};
    
  
    Sorter sorter(std::make_unique<BubbleSortStrategy>());
    
    std::cout << "Original data: ";
    printVector(data);
    
   
    std::cout << "\nUsing Bubble Sort:" << std::endl;
    sorter.sortData(data);
    printVector(data);
    
    
    data = {5, 2, 9, 1, 5, 6};
    sorter.setStrategy(std::make_unique<QuickSortStrategy>());
    std::cout << "\nUsing Quick Sort:" << std::endl;
    sorter.sortData(data);
    printVector(data);
    
    
    data = {5, 2, 9, 1, 5, 6};
    sorter.setStrategy(std::make_unique<StdSortStrategy>());
    std::cout << "\nUsing Std Sort:" << std::endl;
    sorter.sortData(data);
    printVector(data);
    

    data = {5, 2, 9, 1, 5, 6};
    sorter.setStrategy(std::make_unique<InsertionSortStrategy>());
    std::cout << "\nUsing Insertion Sort:" << std::endl;
    sorter.sortData(data);
    printVector(data);
    
    return 0;
}
