#include <iostream>
#include "task1.h"

int main() {
    int array[] = {235, 5325, 2354, 12, 3, 0, 21, 2345};
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
    msort(array,8);
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
    return 0;
}